#include <iostream>

using namespace std;

// 참조와 포인터를 사용해서 텍스트 알피지 만들기

enum PlayerType
{
	PT_Knight = 1,
	PT_ARCHER = 2,
	PT_Mage = 3
};
enum MosterType
{
	MT_Slime = 1,
	MT_Orc = 2,
	MT_Skeleton =3
};

struct StatInfo
{
	int hp = 0;
	int attack = 0;
	int defence = 0;

	
};
void EnterLobby();
void PrintMessage(const char* msg);
void CreatePlayer(StatInfo playerInfo);
void CreateMonster(StatInfo* monsterInfo);
void EnterGame(StatInfo* plyaerInfo);
void PrintStatInfo();

//void EnterBattle(*plyaerInfo, *monsterInfo);


int main()
{
	srand((unsigned)time(nullptr));
	EnterLobby();


	return 0;
}


void EnterLobby()
{
	PrintMessage("로비에 입장했습니다");

	while (true)
	{
		//Player 생성
		StatInfo playerinfo;
		StatInfo& playerInfoRef = playerinfo;

		CreatePlayer(playerInfoRef);
		PrintMessage("플레이어 생성을 완료했습니다");
		EnterGame(&playerinfo);

		
	}
}

void PrintMessage(const char* msg)
{
	cout << "*****************************" << endl;
	cout << msg << endl;
	cout << "*****************************" << endl;

}
void CreatePlayer(StatInfo playerInfo)
{
	bool endCreate = false;
	while (endCreate == false)
	{
		PrintMessage("캐릭터 생성창");
		PrintMessage("[1] 기사  [2] 궁수  [3] 법사");

		int input;
		cin >> input;

		switch (input)
		{
		case PT_Knight:
			playerInfo.hp = 100;
			playerInfo.attack = 10;
			playerInfo.defence = 5;
			endCreate = true;
			break;
		case PT_ARCHER:
			playerInfo.hp = 80;
			playerInfo.attack = 15;
			playerInfo.defence = 3;
			endCreate = true;

			break;
		case PT_Mage:
			playerInfo.hp = 50;
			playerInfo.attack = 40;
			playerInfo.defence = 0;
			endCreate = true;

			break;
		default:
			break;
		}

	}
}

void EnterGame(StatInfo* plyaerInfo)
{
	PrintMessage("게임에 입장");
	
	StatInfo monsterInfo;
	CreateMonster(&monsterInfo);
	//EnterBattle(&plyaerInfo, &monsterInfo);

}
void CreateMonster(StatInfo* monsterInfo)
{
	PrintMessage("몬스터 생성");

	int monsterRandom = rand() % 3 + 1;

	switch (monsterRandom)
	{
	case MT_Orc:
		monsterInfo->hp = 100;
		monsterInfo->attack = 5;
		monsterInfo->defence = 1;
	case MT_Slime:
		monsterInfo->hp = 150;
		monsterInfo->attack = 1;
		monsterInfo->defence = 1;
	case MT_Skeleton:
		monsterInfo->hp = 30;
		monsterInfo->attack = 7;
		monsterInfo->defence = 0;
	default:
		break;
	}
}





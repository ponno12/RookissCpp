#include <iostream>

using namespace std;

// 참조와 포인터를 사용해서 텍스트 알피지 만들기

enum PlayerType
{
	PT_Knight = 1,
	PT_Archer = 2,
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
void CreatePlayer(StatInfo* playerInfo);
void PrintStatInfo(const char* name, const StatInfo& info);
void EnterGame(StatInfo* playerInfo);
void CreateMonster(StatInfo monsterInfo[], int count);
void CreatMonster(StatInfo* monsterInfo);
bool EnterBattle(StatInfo* playerInfo, StatInfo* monsterInfo);



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
		//player 생성
		StatInfo playerinfo;
		StatInfo& playerinforef = playerinfo;

		CreatePlayer(&playerinfo);
		PrintMessage("플레이어 생성을 완료했습니다");
		PrintStatInfo("플레이어", playerinfo);

		EnterGame(&playerinfo);

		
	}
}

void PrintMessage(const char* msg)
{
	cout << "*****************************" << endl;
	cout << msg << endl;
	cout << "*****************************" << endl;

}
void CreatePlayer(StatInfo* playerInfo)
{
	int input;
	cout << "직업을 골라주세요!" << endl;
	cout << "[1] 기사  [2] 궁수 [3] 법사" << endl;
	cin >> input;
	switch (input)
	{
	
	
	case PT_Knight:
		playerInfo->hp = 100;
		playerInfo->attack = 10;
		playerInfo->defence = 5;
		break;
	case PT_Archer : 
		playerInfo->hp = 70;
		playerInfo->attack = 15;
		playerInfo->defence = 3;
		break;
	case PT_Mage:
		playerInfo->hp = 50;
		playerInfo->attack = 25;
		playerInfo->defence = 0;
		break;

	default:
		break;
	}

}

void PrintStatInfo(const char* name, const StatInfo& info)
{
	cout << name << "스탯 " << endl;
	cout << "hp : " << info.hp << endl;
	cout << "attack : " << info.attack << endl;
	cout << "defense : " << info.defence << endl;

}

void EnterGame(StatInfo* playerInfo)
{
	
	cout << "게임에 입장하였습니다" << endl;
	
	while (true)
	{
		StatInfo monsters[2];
		CreateMonster(monsters, 2);
		int monRand = rand() % 3 + 1;
		PrintMessage("[1] 전투 [2] 전투 [3] 도망");
		int input;
		cin >> input;


		if (input == 1 || input == 2)
		{
			int index = input - 1;
			bool victory = EnterBattle(playerInfo, &(monsters[index]));
			if (victory == false)
			{
				break;

			}
		}
	}
	

}

void CreateMonster(StatInfo monsterInfo[], int count)
{
	for (size_t i = 0; i < count; i++)
	{
		int monRand = rand() % 3 + 1;
		switch (monRand)
		{
		case MT_Orc:
			monsterInfo[i].hp = 50;
			monsterInfo[i].attack = 10;
			monsterInfo[i].defence = 5;
		case MT_Slime:
			monsterInfo[i].hp = 100;
			monsterInfo[i].attack = 50;
			monsterInfo[i].defence = 3;
		case MT_Skeleton:
			monsterInfo[i].hp = 30;
			monsterInfo[i].attack = 10;
			monsterInfo[i].defence = 0;

		default:
			break;
		}
		PrintStatInfo("몬스터 ", monsterInfo[i]);

	}
}

bool EnterBattle(StatInfo* playerInfo, StatInfo* monsterInfo)
{
	while (true)
	{
		int damage = playerInfo->attack - monsterInfo->defence;
		if (damage < 0)
			damage = 0;

		monsterInfo->hp -= damage;
		if (monsterInfo->hp < 0)
			monsterInfo->hp = 0;

		PrintStatInfo("Monster", *monsterInfo);

		if (monsterInfo->hp == 0)
		{
			PrintMessage("몬스터를 처치했습니다");
			return true;
		}

		damage = monsterInfo->attack - playerInfo->defence;
		if (damage < 0)
			damage = 0;

		playerInfo->hp -= damage;
		if (playerInfo->hp < 0)
			playerInfo->hp = 0;

		PrintStatInfo("Player", *playerInfo);

		if (playerInfo->hp == 0)
		{
			PrintMessage("Game Over");
			return false;
		}
	}
}






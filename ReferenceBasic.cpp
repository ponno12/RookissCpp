#include <iostream>

using namespace std;

// 참조

struct StatInfo
{
	int hp;
	int attack;
	int defense;
};


void CreateMonster(StatInfo* info);
void CreateMonster(StatInfo info);
void PrintInfoBYCopy(StatInfo info);
void PrintInfoBYPtr(StatInfo* info);


int main()
{
	StatInfo info;
	CreateMonster(&info); // 포인터
	CreateMonster(info); // 값복사

	PrintInfoBYCopy(info);
	PrintInfoBYPtr(&info);

}
//포인터
void CreateMonster(StatInfo* info)
{
	info->attack = 5;
	info->defense = 2;
	info->hp = 100;
}
//값 복사
//값을 수정하지 않는다면 ,양족 다 문제없음

void CreateMonster(StatInfo info)
{
	info.attack = 5;
	info.defense = 2;
	info.hp = 100;
}
// 1) 값 전달방식
void PrintInfoBYCopy(StatInfo info)
{
	cout << " -----------------" << endl;
	cout << "HP : " << info.hp << endl;
	cout << "Attack : " << info.attack << endl;
	cout << "Defense : " << info.defense << endl;
	cout << " -----------------" << endl;


}

//2) 주소 전달 방식
void PrintInfoBYPtr(StatInfo* info)
{
	cout << " -----------------" << endl;
	cout << "HP : " << info->hp << endl;
	cout << "Attack : " << info->attack << endl;
	cout << "Defense : " << info->defense << endl;
	cout << " -----------------" << endl;


}

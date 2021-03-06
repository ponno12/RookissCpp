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
void PrintInfo(StatInfo info);
void PrintInfo(StatInfo* info);


int main()
{

	// 1)값 복사
	// 2)포인터
	// 3) 참조
	int number = 1;

	int* pointer = &number;
	*pointer = 2;
	
	//참조타입
	int& reference = number;
	reference = 3;
	//c++ 관점에서는 number라는 바구니에 또 다른 이름을 부여한것
	//refernce 값을 바꿀시 number(진퉁)값도 바뀌게됨
	 

	StatInfo info;
	CreateMonster(&info); // 포인터
	CreateMonster(info); // 값복사

	//PrintInfo(info);
	//PrintInfo(&info);
	//PrintInfo(info);

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
void PrintInfo(StatInfo info)
{
	cout << " -----------------" << endl;
	cout << "HP : " << info.hp << endl;
	cout << "Attack : " << info.attack << endl;
	cout << "Defense : " << info.defense << endl;
	cout << " -----------------" << endl;


}

//2) 주소 전달 방식
void PrintInfo(StatInfo* info)
{
	cout << " -----------------" << endl;
	cout << "HP : " << info->hp << endl;
	cout << "Attack : " << info->attack << endl;
	cout << "Defense : " << info->defense << endl;
	cout << " -----------------" << endl;
}
//3) 제 3의 방식 참조형식
void PrintInfo(StatInfo& info)
{
	cout << " -----------------" << endl;
	cout << "HP : " << info.hp << endl;
	cout << "Attack : " << info.attack << endl;
	cout << "Defense : " << info.defense << endl;
	cout << " -----------------" << endl;
}

#include <iostream>

using namespace std;

// 포인터 vs 참조
#define OUT
struct StatInfo
{
	int hp;
	int attack;
	int defense;
};


void CreateMonster(StatInfo* info);
void CreateMonster(StatInfo info);
void PrintInfo(const StatInfo& info);
void PrintInfo(StatInfo* info);
void ChangeInfo(OUT StatInfo& info);


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
	//초기화 여부
	//참조는 초기화 할때 값이 할당되어야함
	StatInfo* ptr;
	ptr = &info;

	PrintInfo(&info);
	StatInfo& ref = info;
	PrintInfo(info);

	CreateMonster(&info); // 포인터
	CreateMonster(info); // 값복사

	//PrintInfo(info);
	PrintInfo(&info);
	PrintInfo(info);

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
//void PrintInfo(StatInfo info)
//{
//	cout << " -----------------" << endl;
//	cout << "HP : " << info.hp << endl;
//	cout << "Attack : " << info.attack << endl;
//	cout << "Defense : " << info.defense << endl;
//	cout << " -----------------" << endl;
//
//
//} 

//2) 주소 전달 방식
//pointer도 const 사용가능 * 앞뒤에 따라 의미가 다르다
// 별 뒤
// 
// 
// 별 이전
void PrintInfo(StatInfo* info)
{
	if (info == nullptr)
	{
		return;
	}

	cout << " -----------------" << endl;
	cout << "HP : " << info->hp << endl;
	cout << "Attack : " << info->attack << endl;
	cout << "Defense : " << info->defense << endl;
	cout << " -----------------" << endl;
}
//3) 제 3의 방식 참조형식
//const를 붙임으로 원본수정 불가능하게 할수있음
void PrintInfo(const StatInfo& info)
{
	cout << " -----------------" << endl;
	cout << "HP : " << info.hp << endl;
	cout << "Attack : " << info.attack << endl;
	cout << "Defense : " << info.defense << endl;
	cout << " -----------------" << endl;
}
//특정 조건을 만족하는 몬스터 찾는 함수
StatInfo* FindMonster()
{
	//TODO heap 영역에서 함수를 읽어와서 없으면 nullptr반환
	return nullptr;

}
//레퍼런스를 사용하면서 값을 수정할수있는경우에 사용
void ChangeInfo(OUT StatInfo& info)
{
	info.hp = 100;
}

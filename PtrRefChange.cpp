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


void PrintInfoRef(StatInfo& info);
void PrintInfoPtr(StatInfo* info);
void ChangeInfo(OUT StatInfo& info);


int main()
{


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
	PrintInfoPtr(&info);

	StatInfo& ref = info;
	PrintInfoRef(info);

	//PrintInfo(info);
	PrintInfoPtr(&info);
	PrintInfoRef(info);

	//포인터로 사용하던걸 참조로
	PrintInfoRef(*ptr);
	//참조로 사용하던걸 포인터로
	PrintInfoPtr(&ref);

}
//포인터

//2) 주소 전달 방식
//pointer도 const 사용가능 * 앞뒤에 따라 의미가 다르다
// 별 뒤
// 
// 
// 별 이전
void PrintInfoPtr(StatInfo* info)
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
void PrintInfoRef(const StatInfo& info)
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



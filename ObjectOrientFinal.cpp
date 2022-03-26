#include <iostream>

using namespace std;

//객체지향 마무리
//1)struct와 class 차이
//스트럭은 기본 접근 지정자가 퍼블릭이 고class 는 private이다.

struct TestStruct
{
	int _a;
	int _b;
};

class TestClass
{
public:
	int _a;
	int _b;
};

class Marine
{
public:
	int _hp;
	static int s_attack;
public:
	void TakeDamage(int damage)
	{
		_hp -= damage;
	}
	static void SetAttack(int attack)
	{
		s_attack = attack;
		//사실상 전역변수
	}
};
// 2) static 변수, static 함수
//같은 클래스가 전부 공유하고 있는 값
//
int Marine::s_attack = 0;;
int main()
{
	TestStruct ts;
	ts._a = 1;

	TestClass tc;
	tc._a;
	Marine::s_attack = 7;
	Marine::SetAttack(100);
}
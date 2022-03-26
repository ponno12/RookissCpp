#include <iostream>

using namespace std;

// 객체지향 프로그래밍
// 
// 데이터 + 가공(로직 + 동작)


//Knight설계
// --속성(데이터)
// --기능(동작)


class Knight
{
public:
	//멤버 함수
	void Move(int y, int x);
	void Attack();
	void Die();

	//클래스로 구현하면 멤버변수에 바로접근가능
	void Die()
	{
		_hp = 0;
		cout << "Die" << endl;
	}

public:
	//멤버 변수
	int _hp;
	int _attack;
	int _posY;
	int _posX;
};
//c++에서는 클래스 함수를 정의할때 앞에 어떤것의 멤버함수인지 표시해야함
void Knight::Move(int y, int x)
{
	_posY = y;
	_posX = x;
}
void Knight::Attack()
{
	cout << "Attack = " << _attack << endl;
}
void Move(Knight* Knight, int y, int x)
{
	Knight->_posY = y;
	Knight->_posX = x;
}
int main()
{
	Knight k1;
	k1._hp = 100;
	k1._attack = 10;
	k1._posY = 0;
	k1._posX = 0;
	k1.Move(k1._posY, k1._posX);
	Knight k2;
	k2._hp = 80;
	k2._attack = 5;
	k2._posY = 0;
	k2._posX = 0;

	return 0;
}
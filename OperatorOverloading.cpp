#include <iostream>
using namespace std;

//연산자 오버로딩
// 연산자 함수를 정의해야함
//함수도 멤버와 전역이 있듯이 연산자도 둘다 가능
//멤버 연산자 버전
//  a op b 형태에서 왼쪽을 기준으로 a가 클래스여야만 가능함
// -대입 연산자 (a =b)는 전역버전으로는 만들지 못한다.
// 
//전역 연산자 함수 버전
// a op b 형태라면 a ,b 모두 기준피연산자가 될수있도록 해준다.

//복사 대입 연산자
//자기자신의 참조 
class Position
{
public:
	
	Position operator+(const Position& arg)
	{
		Position pos;
		pos._x = _x + arg._x;
		pos._y = _y + arg._y;
		return pos;
	}
	Position operator+(int arg)
	{
		Position pos;
		pos._x = _x + arg;
		pos._y = _y + arg;
		return pos;
	}
	Position operator==(const Position& b)
	{	
		_x == b._x && _y == b._y;
		return *this;
	}
	Position& operator=(const int arg)
	{
		_x = arg;
		_y = arg;
		return *this;
	}
	//복사대입 연산자
	Position& operator=(const Position& arg)
	{
		_x = arg._x;
		_y = arg._y;
		return *this;
	}
	Position operator++()
	{
		++_x;
		++_y;
		return *this;

	}
	Position operator++(int)
	{
		Position ret = *this;
		_x++;
		_y++;
		return ret;
	}
public:
	int _x;
	int _y;
};


// 에러가남 왼쪽값을 오른쪽에 대입할경우 b에 포지션 값이 들어가는 알수없는 값으로 변할 수 있으므로 문법적으로 막아 놨다.
//void operator=(const Position& a, int b)
//{
//	a._x = b;
//	a._y = b;
//}
Position operator+(int a, const Position& b)
{
	Position ret;

	ret._x = b._x + a;
	ret._y = b._y + a;

	return ret;
}

int main()
{
	Position pos;
	pos._x = 0;
	pos._y = 0;
	
	Position pos2;
	pos2._x = 0;
	pos2._y = 0;

	Position pos3 = pos + pos2;

	Position pos4 = pos3 + 1;
	Position isSame = (pos3 == pos4);
	Position pos5;
	//대입은 참조값을 받음, pos3는 Postion값만 뱉음
	pos5 = pos3++;
	return 0;
}
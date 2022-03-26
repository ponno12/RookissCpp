#include <iostream>

using namespace std;

// 객체지향 프로그래밍
// 
// 생성자 Constructor 소멸자 Destructor
// 시작과 끝을 알리는 함수들
 


class Knight
{
public:
	//[1]기본생성자(인자가 없음)
	//암시적 생성자[implicit] : 명시적으로 생성자를 만들지 않으면 인자없는 생성자를 호출함
	//생성자를 만들면 암시적 생성자는 호출되지 
	Knight()
	{
		_hp = 0;
		_attack = 0;
		_posY = 0;
		_posX = 0;

		cout << "Knight 기본 생성자 호출" << endl;
	}
	
	
	//[2] 복사 생성자
	//자신 클래스의 참조값을 받음	, 똑같은 데이터를 지닌 객체를 생성할때 사용
	Knight(const Knight& knight)
	{

		_hp = knight._hp;
		_attack = knight._attack;
		_posY = knight._posY;
		_posX = knight._posX;


	}
	//[3] 기타 생성자
	// 이중에서 인자를 1개만 받는 기타생성자를 타입변환 생성자라도 부름
	explicit Knight(int hp)
	{
		_hp = hp;
		cout << "Knight HP 생성자 호출" << endl;

	}

	Knight(int hp, int attack, int posX, int posY)
	{
		_hp = hp;
		_attack = attack;
		_posX = posX;
		_posY = posY;
	}
	// 소멸자
	~Knight()
	{
		cout << "~Kngiht 소멸자 호출" << endl;
	}


	void Move(int y, int x);
	void Attack();

	//클래스로 구현하면 멤버변수에 바로접근가능
	void Die()
	{
		_hp = 0;
		//위에는 다음과 같으 생략되어있다.
		this->_hp = 1;
		this;
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

	//복사 생성자
	Knight k3(k1); // 생성과 동시에 복사 , 복사생성자 사용
	Knight k4 = k1; // 둘은 같은의미

	Knight k5; // 생성후 대입 , 기본생성자 사용
	k5 = k1; //이거랑은 다른의미

	//타입변환 생성자
	Knight k6;
	//k6 = 1; //hp에 1이 들어가도록 암시적 형변환을 해줌
	k6 = (Knight)1; //explicit으로 암시적 형변환을 막음

	return 0;
}
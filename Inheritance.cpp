#include <iostream>

using namespace std;


//객체지향
//상속성
//다형성
//캡슐화
//추상화
struct StatInfo
{
	int hp;
	int attack;
	int defensce;
};
// 상속시 메모리
//[[Player]]
// [  Knight ]

//생성자와 소멸자
class Player
{
public:
	Player()
	{
		 _hp =0;
		 _attack= 0;
		 _defense = 0;
		cout << " 플레이어 기본 생성자 호출 " << endl;
	}
	Player(int hp)
	{
		_hp = 10;
	}

	void Move()
	{
		cout << " Plyaer Move 호출 " << endl;
	};
	void Attack()
	{
		cout << " Plyaer Attack 호출 " << endl;
	};
	void Die()
	{
		cout << " Plyaer Die 호출 " << endl;
	};
	~Player()
	{
		cout << " 플레이어 소멸자 호출 " << endl;

	}

public:
	int _hp;
	int _attack;
	int _defense;
};

class Knight : public Player
{
public:
	Knight()
	{
		_stamina = 0;
		cout << " 나이트 기본 생성자 호출 " << endl;
	}
	//재정의 가능
	Knight(int stamina) : Player(10)
	{
		_stamina = stamina;
	}
	void Move()
	{
		cout << " Knight Move 호출 " << endl;
	};
	void KnightAttack()
	{

	}
	~Knight()
	{
		cout << " 나이트 소멸자 호출 " << endl;

	}
public:
	int _stamina;
	
};
class Mage : public Player
{
public:
	

public:
	int _mp;
};



int main()
{

	Knight k;

	k._hp = 10;
	k._defense = 5;
	k._stamina = 100;
	k.Attack();
	k.Move();
	
	k.Die();

}
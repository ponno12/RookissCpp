#include <iostream>

using namespace std;

// 초기화 리스트
// 상속관계에서 원하는 부모 생성자 호출할때 필요
// 멤버 변수 초기화

class Inventory
{
public:
	Inventory() { cout << "basic Inventory " << endl; }
	Inventory(int size) { cout << "Inventory size" << endl; };
	~Inventory() { cout << "~Inventory 소멸자 호출" << endl; }
public:
	int _size = 10;
};




class Player
{
public:
	Player();
	Player(int id)
	{

	}
private:

};

Player::Player()
{
}

class Knight : public Player
{
public:
	Knight();
	
public:
	int _hp;
	Inventory _inventory;
private:

};
//상속받는것처럼 사용하는게 초기화 리스트이다.
//밑처럼 사용시 2번호출
//Knight::Knight() : Player(1), _hp(100)
//{ 
//	//c++ 11 문법 
//	_hp = 100;
//	_inventory = Inventory(20);
//	
//}

//바로 Inventory(int a) 버전을 호출하므로 1번만 호출
Knight::Knight() :Player(1), _inventory(20)
{
	_hp = 100; 
}


int main()
{ 
	Knight k;
	cout << k._hp << endl;

	if (k._hp < 0)
	{
		cout << "Knight is Dead " << endl;
	}

	return 0;

}
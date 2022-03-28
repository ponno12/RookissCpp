#include <iostream>

using namespace std;

// 얕은 복사 vs 깊은 복사

class Player
{
public:
	int _level = 0;
public:
	Player()
	{
		cout << "Player() " << endl;
	}
	Player(const Player& player)
	{
		cout << "Player(const Player& player) " << endl;
		_level = player._level;
	}
	Player& operator=(const Player& player)
	{
		cout << "operator = (const Player& player) " << endl;
		_level = player._level;

		return *this;

	}
};

class Pet
{
public:


public:
	Pet()
	{
		cout << "Pet() " << endl;
	}
	~Pet()
	{
		cout << "~Pet() " << endl;

	}
	Pet(const Pet& pet)
	{
		cout << "Pet(const Pet& pet) " << endl;

	}
	Pet& operator=(const Pet& pet)
	{
		cout << "operator Pet()" << endl;
		return *this;
	}
};
class RebbitPet : public Pet
{

};
class Knight : public Player
{
public:
	Knight()
	{
		
	}
	Knight(const Knight& knight) : Player(knight), _pet(knight._pet)
	{
		_hp = knight._hp;
		
	}
	
	Knight operator=(const Knight& knight)
	{
		Player::operator=(knight);

		_hp = knight._hp;
		_pet = knight._pet;
		return *this;
	}
	~Knight()
	{
		
	}

public:
	int _hp = 100;
	Pet _pet;
};

int main()
{

	//Pet* pet = new Pet();
	Knight knight; // 기본 생성자
	knight._hp = 200;
	
	cout << "복사 생성자" << endl;

	Knight kngiht2 = knight; // 복사생성자
	cout << "복사 대입자" << endl;

	Knight knight3; // 기본생성자후 복사 대입
	knight3 = knight;
	//같은 주소를 가지고 있는 펫을 소유하므로 1번 기사가 제거될때 펫도 제거되었으나
	//2번째 기사도 같은 펫을 제거할려고 하면서 에러 발생
	// 
	// 
	//-암시적 복사 생성자 Steps
	// 1) 부모클래스 복사 생성자 호출
	// 2) 멤버 클래스의 복사 생성자 호출
	// 3) 멤버가 기본타입일 경우 메모리 복사 (얕은복사)
	//-명시적 복사 생성자 Steps
	// 1) 부모 클래스의 기본생성자 호출
	// 2) 멤버 클래스의 기본 생성자 호출
	//

	//암시적 복사 대입연산자 Steps
	// // 1) 부모클래스 복사대입 연산자 호출
	// 2) 멤버 클래스의 복사대입 연산자 호출
	// 3) 멤버가 기본타입일 경우 메모리 복사 (얕은복사)
	//명시적 복사대입 연산자 Steps
	// 1) 알아서 해주는게 없음

	return 0;
}
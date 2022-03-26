#include <iostream>

using namespace std;

// 다형성
// 오버로깅( 함수 중복 정의) == 함수 이름 재사용
// 오버라이딩( 재정의 )  == 부모 클래싀의 함수를 자식 클래스에서 재정의

// 바인딩
// 가상함수 테이블
class Player
{
public:
	void Move() { cout << "Move Player !" << endl; }
	virtual void VMove() { cout << "Move Player !" << endl; }

	//순수 가상함수, 자식객체에서 무조건 재정의되어야함.
	virtual void VAttack() = 0;

	void Move(int a) { cout << "Move Player !  " <<  a  << endl; }



public:
	int _hp;
};


class Knight : public Player
{
public:
	void Move() { cout << "Move Knight !" << endl; }
	//한번 가상함수로 부모에서 지정시 자식도 자동으로 가상함수
	void VMove() { cout << "Move Kngiht !" << endl; }

	
	virtual void VAttack()
	{
		cout << "Knight Attack " << endl;
	}

public:
	int _stamina;

};

class Mage : public Player
{
public:

	virtual void VAttack()
	{
		cout << "Knight Attack " << endl;
	}

public:
	int _mana;


};

void MovePlayer(Player* player)
{
	player->VMove();
}
void MoveKnight(Knight* knight)
{
	knight->Move();
}
int main()
{
	//순수가상함수가 들어가면 해당 클래스로는 객채를 선언하지 못하게됨
	//Player p;
	//p.Move();
	//p.Move(100);

	//MovePlayer(&p);
	//MoveKnight(&p); //자식의 메소드는 부모사용 불가능


	Knight kngiht;
	kngiht.Move();
	//MoveKnight(&kngiht);
	MovePlayer(&kngiht);// 자식은 부모 메소드 사용가능,

}
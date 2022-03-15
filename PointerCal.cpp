#include <iostream>

using namespace std;

// 포인터 연산

// 1) 주소 연산자(&)
// 2) 산술 연산자(+ -)
// 3) 간접 연산자( * )
// 4) 간접 멤버 연산자(->)
struct Player
{
	int hp; // 0
	int damage;// 주소값 +4
};

int main()
{
	int number = 1;
	// 1) 주소 연산자(&)
	//- 해당 변수의 주소를 가져옴, 해당 변수 타입에 따라서 타입* 반환
	int* ptr = &number;

	cout << number << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	// 2) 산술 연산자
	number += 1;//1 증가함
	ptr += 2;// 4 증가함 ??? 
	//포인터의 크기가 아니라 Type인 int의 바이트 크기만큼 증가함
	
	cout << number << endl;
	cout << ptr << endl;
	cout << *ptr << endl;

	//포인터에서 + - 는 값을 바꾸는것이 아니라 변수를 Type의 크기만큼 이동하라는 의미이다.

	// 3) 간접 연산자(*)
	// 포인터가 가르키는 주소에 있는 값을 변경할수있음
	

	number = 3;
	*ptr = 3; //둘은 갑ㅌ은 주소를 가르킴
	Player player;
	player.hp = 100;
	player.damage = 10;

	Player* playerPtr = &player;

	(*playerPtr).hp = 200;
	(*playerPtr).damage = 200;
	//.의 기능은 offset을 기준으로 포인트 산술연산을 사용한다
	// 4) 간접 멤버 연산자(->) 
	//구조체에도 포인터로 지정가능함
	// *와 . 을 한꺼번에 처리해주는 연산자
	
	playerPtr->hp = 100;
	playerPtr->damage = 100;

	return 0;
}
#include <iostream>

using namespace std;

class Knight
{
public:
	int _hp = 10;
};

class Dog
{

public:
	Dog();
	//타입 변환 생성자
	Dog(const Knight& knight);
	//타입 변환 연산자
	operator Knight()
	{
		return (Knight)(*this);
	}

public:
	int _age = 5;
	int _spices = 0;
};
Dog::Dog(const Knight& knight)
{
	_age = knight._hp;
}
class BullDog : public Dog
{
public:
	bool _french;
public:
	BullDog() {};
	~BullDog() {};

private:

};


int main()
{
	//아무런 연관 관계가 없는 클래스 사이의 [값타입] 변환
	{
		Knight knight;
		Dog dog;
		dog = (Dog)knight;
		
		Knight knight2 = dog;
	}

	//[2] 연관 없는 클래스 사이의 [참조 타입] 변환
	{
		Knight knight;
		//암시적으로는 참조타입은 막혀있음
		// 어셈블리 : 포인터 = 참조
		Dog& dog = (Dog&)knight;
		dog._spices = 1;


	}
	//[3] 상속 관계가 있는 클래스 사이의 변환
	{
		// 값타입 변환
		Dog dog;
		//부모를 자식에 대입 X
		//BullDog bulldog = dog;
		BullDog bulldog;
		Dog dog2 = bulldog;
	}
	{
		//참조타입 변환
		//부모를 자식에 넣을려면 명시적 표현 필요
		Dog dog;
		BullDog& bulldog = (BullDog&)dog;
	}
	{
		BullDog bulldog;
		Dog& dog = bulldog;
	}

	//결론
	// 값타입 변환 : 비트열도 바꾸기 논리적으로 말이 되게 바꾸는 변환
	// 
	// 참조타입 변환 : 비트열은 냅두고 우리의 관전만 바꾸는 변환
	// 명시적으로 해주긴 하는데 말안해도 그냥( 암시적 ) 으로 해주는지는 안정성 여부와 연관있음
	// 메모리 침범 위험이 있는 경우는 명시적으로 해야함
	//
}
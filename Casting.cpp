#include <iostream>

using namespace std;

//캐스팅
// 1) static_cast
// 2) dynamic_cast
// 3) const_Cast
// 4) reinterpret_Cast
//

void PrintName(char* str)
{
	cout << str << endl;
}
class Player
{
public:
	virtual ~Player() {};
};
class Knight : public Player
{

};
class Archer : public Player
{

};
int main()
{
	// static cast : 상식적인 캐스팅만 허용
	int hp = 100;
	int maxHp = 200;
	float ratio = static_cast<float>(hp)/maxHp;
	//안전성을 보장하는것은 아님
	Player* p = new Knight();
	Knight* k1 = static_cast<Knight*>(p);

	// dynamic cast :  상속관계에서 안전한 상속지원, 버츄얼함수와 같이 사용
	// RTTI(RUNTIME TYPE information) :   
	// 원본 타입을 확인할수 있다.
	Knight* k2 = dynamic_cast<Knight*>(p);

	// const cast : const를 붙이거나 때거나 할때 사용
	PrintName(const_cast<char*>("ponno"));

	// reinterpret_cast
	// 가장 위험하고 강력한 형태의 캐스팅
	// 포인터랑 상관 없는 다른 타입으로 변환등
	__int64 address = reinterpret_cast<__int64>(k2);

	return 0;
}
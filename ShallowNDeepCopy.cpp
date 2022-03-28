#include <iostream>

using namespace std;

// 얕은 복사 vs 깊은 복사

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
};
class RebbitPet : public Pet
{

};
class Knight
{
public:
	Knight()
	{
		_pet = new Pet();
	}
	Knight(const Knight& knight)
	{
		_hp = knight._hp;
		_pet = new Pet(*knight._pet);
	}
	Knight operator=(const Knight& knight)
	{
		_hp = knight._hp;
		_pet = new Pet(*knight._pet);
		return *this;
	}
	~Knight()
	{
		delete _pet;
	}

public:
	int _hp = 100;
	Pet* _pet;
};

int main()
{

	Pet* pet = new Pet();
	Knight knight; // 기본 생성자
	knight._hp = 200;
	knight._pet = pet;


	Knight kngiht2 = knight; // 복사생성자

	Knight knight3; // 기본생성자후 복사 대입
	knight3 = knight;
	//같은 주소를 가지고 있는 펫을 소유하므로 1번 기사가 제거될때 펫도 제거되었으나
	//2번째 기사도 같은 펫을 제거할려고 하면서 에러 발생

}
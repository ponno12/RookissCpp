#include <iostream>

using namespace std;

//캡술화 ( 은닉성 )

//1) 위험하고 건드리면 안되는 경우
//2) 다른 경로로 접근하길 원하는경우

class Car
{
public:
	void MoveHandle() {};
	void puahPedal() {};
	void OpenDoor() {};
protected:
	void DisassembleCar() {};
	void RunEngine() {};
	void ConectCircuit() {};

public:

private:
};

// 상속 접근 지정자 : 다음 세대한테 부모님의 유산을 어떻게 물려줄지
//부모한테 모든걸 받을 필요는 없음
class SuperCar : public Car // 상속 접근 지정자
{
public :
	void PyshREmoteController()
	{
		RunEngine();
	}
};

class Berserk
{
public:
	int GetHp() { return _hp; }
	void SetHp(int hp) { _hp = hp; }

	void SetBerserkerMode()
	{
		cout << " 매우 강해짐" << endl;
	}
private:
	int _hp = 100;
};

int main()
{
	Berserk berser;
	/*berser._hp = 20;
	if (berser._hp < 20)
	{
		berser.SetBerserkerMode();
	}*/
	berser.SetHp(10);
	if (berser.GetHp() < 20)
	{
		berser.SetBerserkerMode();
	}
	// public에 있는 것만 사용가능

}
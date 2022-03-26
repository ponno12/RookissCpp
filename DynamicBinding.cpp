#include <iostream>

using namespace std;

// 동적 바인딩
// 프로그램이 실행됨에 따라 생성이 바뀜;
// 필요할때만 사용하고, 필요 없으면 반납할 수 있는 
// 우리가 생성/ 소멸 시점을 관리할수있는 메모리

//동적할당과 연관된 함수/연산자들 : malloc, free, new ,delete, new[] delete[]
class Monster
{
public:
	int _x;
	int _y;
	int _hp;
public:
	Monster()
	{
		cout << " Monster 생성자 호출" << endl;
	}
	~Monster()
	{
		cout << " Monster 소멸자 호출" << endl;

	}
	
};

int main()
{
	
	//void* pointer = malloc(1000);
	//void* pointer = malloc(sizeof(Monster));

	//Monster* m1 = (Monster*)pointer;
	//m1->_hp = 100;
	//m1->_x = 1;
	//m1->_y = 1;
	////free 할당된 영역을 해제
	//free(pointer);
	//m1->_hp = 100;
	//m1->_x = 1;
	//m1->_y = 1;
	Monster* m2 = new Monster;
	m2->_hp = 100;
	m2->_x = 1;
	m2->_y = 2;
	delete m2;

	Monster* m3 = new Monster[1];
	m3->_hp = 100;
	m3->_x = 1;
	m3->_y = 2;
	
	Monster* m4 =(m3+1);
	m4->_hp = 100;
	m4->_x = 1;
	m4->_y = 2;
	//delete m3;
	delete[] m3;

	return 0;
}
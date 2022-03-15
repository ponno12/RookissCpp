#include <iostream>

using namespace std;

void SetHP(int* hp)
{
	*hp = 100;
}
//포인터

int main()
{

	int hp = 1;
	SetHP(&hp);
	cout << hp << endl;
	int number = 1;


	//TYPE* 변수이름
	//[주소를 저장하는 바구니]
	int* ptr = &number;
	int* value = ptr;
	*ptr = 2;
	cout << number << endl;
	cout << *value << endl;

	// Type 은 왜 붙여줄까? 어차피 4/8바이트로 고정바이트인데
	// 포인터에 대한 추가 정보 표현(어떤 데이터 타입을 사용할것인지)


	//타입 불일치
	int* ptr2 = & number;

	*ptr = 0x0ABBCCDDEEFF;
	cout << number << endl;
}
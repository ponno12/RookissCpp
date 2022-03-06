#include <iostream>
using namespace std;

//데이터 연산

// a라는 이름의 바구니를 할당하고 안에 1을 넣는다.
int a = 1;

int b = 2;

int main() {

#pragma region 산술연산
	//	산술 연산자
	//	대입연산
	a = b;

	//	사칙연산
	a = b + 3; // 덧셈 add 
	a = b - 3; // 뺄셈 sub
	a = b * 3; // 곱셈 mul
	a = b / 3; // 나눗셈 div
	a = b % 3; // 나머지 div
	//할당 연산자
	a += 3; // a= a+3
	a -= 3;
	a *= 3;
	a /= 3;
	a %= 3;

	//증감 연산자
	a = a + 1;
	a++;
	++a;
	a--;
	--a;
	b = a++; // a를 넣고난후 1증가

	

#pragma endregion
	

}
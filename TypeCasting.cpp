#include <iostream>

using namespace std;

// 타입 변환
//1) 값 타입 변환
// 의미를 유지 하기 위해서 원본 객체와 다른 비트열 재구성
//2) 참조 타입 변환
// 원본 객체 그대로 타입변환
// 
// 안전한 변환
// 작은 바구니에서 큰바구니  (업캐스팅)
// 
// 불안전한 변환
// 
// 암시적 변환
// 컴파일러가 자동으로 타입 변환
// 명시적 변환
//
int main()
{
	{
		//값 타입 변환
		int a = 123456789;
		float b = (float)a;
		cout << b << endl;
		//참조 타입 변환
		float c = (float&)a;
		cout << c << endl;
		//안전한 변환
		int little = 10;
		__int64 big = little; //(업캐스팅)
	}
	
	{
		//암시적 변환
		int a = 123456789;
		float b = a; // 암시적
		cout << b << endl;

	}
	{
		// 명시적 변환
		int a = 12345679;
		int* b = (int*)a;
		cout << b << endl;
	}

}
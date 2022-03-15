#include <iostream>

using namespace std;

//오늘의 주제 함수
void PrintHelloWorld()
{
	cout << "HELLO World" << endl;

	return;
}

//정수를 입력 받아 콘솔에 출력 하는 함수

int Integer(int integer)
{
	cout << "넘겨받은 숫자는 " << integer << "입니다" << endl;
}
int main()
{

	PrintHelloWorld();
	Integer(3);
}


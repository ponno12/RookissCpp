#include <iostream>

using namespace std;


// 지역 변수와 값전달

int globalValue = 0;

void Test();
int main()
{
	cout << "전역 변수의 값은 : " << globalValue << endl;
	globalValue++;

	Test();
	//지역변수 
	int localValue = 0;
}

void Test()
{
	cout << "전역 변수의 값은 : " << globalValue << endl;
	globalValue++;
}
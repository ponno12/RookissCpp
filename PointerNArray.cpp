#include <iostream>

using namespace std;

//  포인트 vs 배열

void Test(int a)
{
	a++;
}
// 배열을 함수 인자로 넘기면 ,컴파일러가 알아서 포인터로 치환
//배열의 내용전체를 넘긴게 아니라, 시작주소만 넘김
void Test(char a[])
{
	a[0] = 'x';
}
int main()
{
	// 문자열 = 문자 배열  
	//. data 주소[][][][] ......
	//포인터는 단순히 주소를 담는 바구니
	const char* test1= "Hello World";


	//배열은 그 자체로 같은 데이터 끼리 붙어있는 바구니 모음
	char test2[] = "Hello Wordl";
	char* test3[10];
	int a = 0;
	Test(a);

	cout << a << endl;

	Test(test2);

	cout << test2 << endl;

	*test3 = test2;

	cout << *test3 << endl;


		

}
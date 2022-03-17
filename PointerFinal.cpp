#include <iostream>
using namespace std;


int* TestPointer()
{
	int a = 1;
	return &a;
}

int& TestRef()
{
	int a =1;
	return a;
}
void TestWrong(int* ptr)
{
	int a[100] = {};
	*ptr = 0x00123412;
}
int main()
{
	int* p;

	int arr[10] = {1,2,3,4,5,6,7,8};

	//[-배열이름] 은 배열의 시작 주소값으 가리키는 Type* 포인터로 변환가능!

	p = arr;
	//밑의 내용은 전부 호환된다
	cout << p[0] << endl;
	cout << arr[0] << endl;
	cout << p[5] << endl;
	cout << arr[5] << endl;

	cout << *p << endl;
	cout << *arr << endl;

	cout << *(p + 3) << endl;
	cout << *(arr + 3) << endl;
	
	//(2차원 배열과 다중포인터)

	int arr2[2][2] = { {1,2},{3,4} };
	//주소2[]<< 4바이트
	//주소1[주소2]
	//pp [ 주소1]
	//int** pp = (int**)arr2;
	// cout << (**pp) << endl;
	// 에러가 남
	int* pp = (int*)arr2;
	//int(*pp)[2] = arr2;
	int(*p2)[2] = arr2;
	cout << (*p2)[0] << endl;
	cout << (*(p2 + 1))[0] << endl;
	cout << (*pp) << endl;
	
	//[매개변수][리턴][지역변수]
	int* pointer = TestPointer();
	TestWrong(pointer);

}
#include <iostream>

using namespace std;

// 연습 문제

//1) 문자열길이를 출력하는 함수
int StrLen(const char* str)
{
	int count= 0;
	//custom version 작동 이상함
	for (int i = 0; i < sizeof(str); i++)
	{
		if (str[i] != '\0')
		{
			count++;
			
		}
		else
		{
			break;
		}
		
	}
	/*while (str[count] != '\0')
	{
		count++;
	}*/

	
	return count;
}
//2) 문자열 복사 함수
#pragma warning(disable: 4996)
char* Strcpy(char* b, const char* a)
{
	for (size_t i = 0; i <= strlen(a); i++)
	{
		b[i] = a[i];
	}
	//포인터로도 대체가능
	return b;
}
//3) StrCat 문자열 추가함수
char* MyStrCat(char* b, const char* a)
{
	char temp[100];
	Strcpy(temp, a);
	for (size_t i = 0; i <= strlen(b); i++)
	{
		temp[i+strlen(a)] = b[i];
	}
	Strcpy(b, temp);
	return b;
}

char* StrCat(char* b, const char* a)
{
	int len = StrLen(b);
	int i = 0;
	while (a[i] != '\0')
	{
		b[len + i] = a[i];
		i++;
	}
	b[len + i] = '\0';
	return b;
}

int MyStrCmp(const char* a , const char* b)
{
	int aLen = strlen(a);
	int bLen = strlen(b);
	int longLen = max(aLen, bLen);
	for (size_t i = 0; i < longLen; i++)
	{
		if (a[i] > b[i])
			return 1;
		else if (a[i] < b[i])
		{
			return -1;
		}
		else if(a[aLen] == b[bLen] && i ==longLen -1)
		{
			return 0;
		}
	}
	return 0;
}
int StrCmp(char* a, char* b)
{
	int i = 0;
	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] > b[i])
		{
			return 1;
		}
		else if (a[i] < b[i])
		{
			return -1;

		}
			i++;

	}
}
void ReversStr(char* str)
{
	int len = StrLen(str);
	for (int i = 0; i < len /2; i++)
	{
		swap(str[i], str[len - 1 - i]);
	}

}

//4)strcmp 두개를 비교하기
//값은 같더라도 주소가 다르면 다른 변수임



int main()
{
	const int BUF_SIZE = 100;

	char a[BUF_SIZE] = "Hello";
	char b[BUF_SIZE];
	char c[BUF_SIZE] = "Cplus";

	//스트링 열의 길이를 반환해주는 함수 만들어보기
	/*int len = strlen(a);
	cout << len << endl;


	int myLen = StrLen(a);
	cout << myLen << endl;*/
	Strcpy(b, a);
	cout << b << endl;
	StrCat(b, a);
	int strcompareInt = StrCmp(a, a);
	cout << strcompareInt << endl;
	ReversStr(a);
	cout << a << endl;
	return 0;
}

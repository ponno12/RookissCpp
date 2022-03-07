#include <iostream>
using namespace std;

//문자와 문자열

//char : 알파벳 / 숫자 문자를 나타냄
//wchar_t : 유니코드 문자를 나타낸다.

// ASCII (미국표준 코드)
char ch = 97; // 1바이트
char ch2 = '1'; // 1바이트
char ch3 = 'a' + 1; // 1바이트


//국제화 시대에는 영어만으로 서비스할수 없음으로 대체하는게 유니코드
//중국어와 한국어가 제일 많은 번호를 차지함
//표기 방식이 여러가지가 있음 utf-8/ utf-16

//utf-8 알파벳 , 숫자 1바이트
//utf-16 유럽지역 문자는 2바이트
//wchar_t 는 유니코드를 저장한다
wchar_t wch = L'노';
char str[] = { 'h','2','l','l','o','\00' };
char str2[] = "HELLO World";
string str3 = "HELLo world string";
int main()
{
	cout << ch << endl << ch2 << ch3 << endl;
	//setlocale(LC_ALL, "");
	wcout.imbue(locale("korean"));
	wcout << wch << endl;
	cout << str << endl;
	cout << str2 << endl;
	cout << str3 << endl;



}


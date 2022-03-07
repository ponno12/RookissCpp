#include <iostream>
using namespace std;

//데이터 연산

// a라는 이름의 바구니를 할당하고 안에 1을 넣는다.


int a = 1;

int b = 2;

bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;

bool test;

int hp = 100;

bool isInvincible = true; // 무적

unsigned char flag; // 부호를 없애야 1이 딸려오지 않음
int main() {
	//[스택 영역]
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

#pragma region 비교연산

	//조건문의 트리거로 자주사용

	// a==b 같으면 1 다르면 0
	isSame = (a == b);
	// a!= b 같으면 0 다르면 1
	isDifferent = (a != b);
	// a>b , a>=b, a<b, a <=b : 대소비교
	isGreater = (a > b);
	isSmaller = (a < b);



#pragma endregion

#pragma region 논리연산
	// 조건에 대한 논리적 사고가 필요할때

	// ! not 0이면 1, 1이면 0
	test = !isSame;
	// && (and) 둘다 1이면 1 그외 0
	test = (hp <= 0 && isInvincible == false);

	// || (or) 둘중하나라도 1이면 1 둘다 0이면 0
	test = (hp >= 0 || isInvincible == true);// 살았음

#pragma endregion

#pragma region 비트연산


	/*~ bitwise not
	* 단일 숫자의 모든 비트를 대상으로 뒤바꿈
	*
	* & bitwise and
	* 두숫자의 비트쌍을 대상으로 and문 실행
	* | bitwise or
	* 두 숫자의  비트쌍을 대상으로 ,or실행
	*
	* ^ bitwise xor
	* 두 숫자의 비트쌍을 대상으로 xor실행 (같은값이면 0 다르면 1)
	*
	*
	* <<비트 좌측이동
	* 비트열을 N만큼 왼쪽으로 이동시킴
	* 왼쪽의 넘치는 값은 버려진다.
	*
	* >>비트 우측이동
	* -부호 비트가 존재할 경우 부호 비트를 따라감
	* 실습
	* bitflag
	*
	* bitmask
	* flag & (1<<3) != 0;
	*
	*/
	//무적상태 만들기
	flag = (1 << 3);
	//변이상태 추가
	flag |= (1 << 2);
	int num1 = 15;

	int num2 = 8;



	cout << "~ 연산자에 의한 결괏값은 " << (~num1) << "입니다." << endl;

	cout << "<< 연산자에 의한 결괏값은 " << (num2 << 2) << "입니다." << endl;

	cout << ">> 연산자에 의한 결괏값은 " << (num2 >> 2) << "입니다.";


#pragma endregion
}
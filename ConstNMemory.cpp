#include <iostream>

using namespace std;

// 한번 정해지면 절대 바뀌지 않을 값들
// constant의 약자인 const를 붙임 (변수를 상수화)
// const는 반드시 초기값을 지정해야함



//main이 아니라 위에 선언을 해야 heap영역에 들어간다

const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
const int INVINCIBLE = 3;

bool isInvincible;
unsigned char flag;
//전역변수
//[데이ㅓㅌ 영역]
// .data (초기값 있는 경우) 
int a = 2;
// .bss (초기값 없는 경우)
int b;

// .rodata(일기 전용 데이터)
const char* msg = "Hello world";

int main() {
	int c = 3;
#pragma region mask
	// 무적 상태로 만든다.

	flag = (1 << INVINCIBLE);
	// 변이상태를 추가

	flag |= (1 << POLYMORPH);

	// 무적인지 확인 (BITMASK)
	isInvincible = (flag & (1 << INVINCIBLE)) != 0;
	// 무적이거나 변이인지 확인
	bool isStunOrInvincible = ((flag & (1 << INVINCIBLE) & (1 << POLYMORPH)) != 0); //
	bool isStunOrInvincible = ((flag & (1 << (INVINCIBLE + POLYMORPH))) != 0); //


#pragma endregion

}
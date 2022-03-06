#include <iostream>
using namespace std;

int hp = 100;

char a;  // 1바이트 (-128~127)
short b; // 2바이트 (-32786~+32767)
int c;   // 4바이트(-21.4억 ~21.4억)
__int64 d ; // 8바이트 (long long) 어마어마하게 큰단위

//양수만 비트 앞에서 부호비트를 없애줌
unsigned char ua;  // 1바이트 (0~255)
unsigned short ub; // 2바이트 (0~65536)
unsigned int uc;   // 4바이트(0~42.9억)
unsigned __int64 ud; // 8바이트 (long long) 어마어마하게 큰단위


// 귀찮은 그냥 대충 4바이트로 가면 안될까?

int main()
{
    cout << "체력이 " <<hp << " 남았습니다" << endl;
    
}


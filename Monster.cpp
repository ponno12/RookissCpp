#include "Monster.h"
#include <iostream>
using namespace std;
void Monster::PrintInfo()
{
	cout << " ---------------" << endl;
	cout << " [몬스터정보] " << "HP: " << _hp << "ATT: " << _attack << "DEF: " << _defense << endl;
	cout << " ---------------" << endl;

}

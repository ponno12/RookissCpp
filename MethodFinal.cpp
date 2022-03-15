#include <iostream>

using namespace std;



int Add(int a, int b)
{
	int result = a + b;
	return result;
}
void SetPlayerInfo(int hp, int mp, int attack, int guildId = 0)
{

}
void SetPlayerInfo(int hp, int mp, int attack)
{

}
int Factorail(int n)
{
	if (n == 1)
		return 1;
	else
	{
		return n * Factorail(n - 1);
	}
}
int main()
{
	int result = Add(1.5f, 2.1f);

	SetPlayerInfo(100, 40, 10, 0);
	SetPlayerInfo(110, 40, 10, 0);
	SetPlayerInfo(120, 40, 10, 0);
	SetPlayerInfo(130, 40, 10, 0);
	SetPlayerInfo(140, 40, 10, 0);
	cout << result << endl;

	int fResult = Factorail(10000);
	cout << fResult << endl;

}
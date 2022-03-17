#include <iostream>

using namespace std;


// 다차원 배열


int main()
{
	int first[5]= {1,2,3,4,5};
	int second[5] ={6,7,8,9,10};

	// 두 배열은 같은 모양이다.
	int apartment2D[2][5] = { {1,2,3,4,5},{6,7,8,9,10} };

	apartment2D[1][4]; // 2층 5번째 == 10;

	for (int floor  = 0; floor < 2; floor++)
	{
		cout << endl;
		for (int room  = 0; room < 5; room++)
		{
			cout << apartment2D[floor][room] << " ";
		}
	}
	return 0;
}
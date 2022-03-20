#include <iostream>
#include <iomanip>
using namespace std;


const int MAX = 100;
int board[MAX][MAX] = {};
int N;
int dy[] = { 0, 1 ,0, - 1 };
int dx[] = { 1, 0 ,-1 , 0 };

void PrintBoard()
{
	for (size_t y = 0; y < N; y++)
	{
		for (size_t x = 0; x < N; x++)
		{
			cout << setfill('0') << setw(2) << board[y][x] << " ";
		}
		cout << endl;
	}
}

enum DIR
{
	RIGHT = 0,
	DOWN =1,
	LEFT =2,
	UP  =3,
};
//void MySetBoard()
//{
//	int value = 1;
//	int i = 0;
//	int j = 0;
//	int count = N;
//	while (value <= N*N)
//	{
//		if (i < count)
//		{
//			board[j][i] = value;
//			i++;
//		}
//		if (j < count)
//		{
//			board[i][j] = value;
//			j++;
//
//		} 
//		if (i == count)
//		{
//			count--;
//		}
//
//
//		value++;
//	}
//
//}

bool CanGo(int y, int x)
{
	if (y < 0 || y >= N)
		return false;
	if (x < 0 || x >= N)
		return false;
	if (board[y][x] != 0)
		return false;
	return true;
}
void SetBoard()
{
	int dir = RIGHT;
	int num = 1;
	int y = 0;
	int x = 0;
	while (true)
	{
		board[y][x] = num;
		//cout << num << endl;
		if (num == N * N)
		{
			break;
		}
		int nextY = y + dy[dir];
		int nextX = x + dx[dir];
		/*switch (dir)
		{
		case RIGHT:
			nextY = y;
			nextX = x + 1;
			break;

		case DOWN:
			nextY = y+1;
			nextX = x;
			break;

		case LEFT:
			nextY = y;
			nextX = x -1;
			break;

		case UP:
			nextY = y-1;
			nextX = x ;
			break;

		default:
			break;
		}*/

		if (CanGo(nextY, nextX))
		{
			y = nextY;
			x = nextX;
			num++;
			PrintBoard();
		}
		else
		{
			/*switch (dir)
			{
			case RIGHT:
				dir = DOWN;
				break;
			case DOWN:
				dir = LEFT;
				break;
			case LEFT:
				dir = UP;
				break;
			case UP:
				dir = RIGHT;
				break;
			default:
				break;
			}*/
			dir = (dir + 1) % 4;
		}
	}
}
int main()
{
	
	//SetBoard();
	while (true)
	{
		cin >> N;
		SetBoard();
		PrintBoard();

	}

}
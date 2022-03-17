#include <iostream>

using namespace std;
void Swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}
void MySort(int numbers[], int count)
{
	
	for (size_t i = 0; i < count; i++)
	{
		for (size_t j = i; j < count; j++)
		{
			if (numbers[i] > numbers[j])
			{
				Swap(numbers[i], numbers[j]);
			}
		}
	}
}
void Sort(int numbers[], int count)
{
	for (int i = 0; i < count; i++)
	{
		int best = i;
		for (int j = i+1; j < count; j++)
		{
			if (numbers[best] > numbers[j])
			{
				best = j;
			}
		}
		if (i != best)
		{
			Swap(numbers[i], numbers[best]);
		}
	}
}

void ChooseLotto(int numbers[])
{
	//랜덤으로 1~45 사이의 숫자를 6개 고르기(중복없이)
	srand((unsigned)time(0));
	int count = 0;
	while (count != 6)
	{
		int choosendInt = 1+(rand()%45);
		

		//이미 찾은 값잊니?
		bool found = false;
		for (int i = 0; i < count; i++)
		{
			if (numbers[i] == choosendInt)
			{
				found = true;
				break;

			}
			/*else if (numbers[i] ==NULL)
			{
				numbers[i] == choosendInt;
				count++;*/

		}
		if (found == false)
		{
			numbers[count] = choosendInt;
			//cout << numbers[count] << endl;
			count++;
		}
	}
	
}
int main()
{
	
	//1) swap
	int a = 1;
	int b = 2;
	Swap(a, b);

	//2) 정렬 함수 만들기( 작은 숫자가 먼저 오도록 정렬
	int numbers[6] = { 1, 42, 3, 15, 5, 6 };

	//nubers가 할당된 크기만큼만 가져올수있게금 배열의 숫자를 세는방법
	
	
	//3) 로또 번호 생성기
	ChooseLotto(numbers);
	Sort(numbers, 6);
	for (size_t i = 0; i <6; i++)
	{
		cout << numbers[i] << endl;
	}

	 
}
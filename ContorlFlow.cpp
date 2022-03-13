#include <iostream>
#include <stdio.h>
using namespace std;

const int ROCK = 0;
const int PAPER = 1;
const int SCISSORS = 2;

int main() {

	int hp = 100;
	int damage = 10;

	hp -= damage;
	bool isDead = (hp < 0);

	if (isDead) {
		std::cout << "몬스트럴 처치했습니다" << std::endl;


	}
	int input = 1;
	;
	cin >> input;
	switch (input)
	{
	case ROCK:
		cout << "바위" << endl;
		break;
	case PAPER:
		cout << "보" << endl;
		break;
	case SCISSORS:
		cout << "가위" << endl;
		break;
	default:
		cout << "다른값을 입력하셨습니다" << endl;
		break;
	}
}
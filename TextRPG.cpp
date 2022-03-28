#include <iostream>
#include "Game.h"
using namespace std;

//텍스트 알피지



int main()
{
	srand((unsigned int)time(nullptr));
	Game game;
	game.Init();
	while (true)
	{
		game.Update();
	}

	return 0;
}
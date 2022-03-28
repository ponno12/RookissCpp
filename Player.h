#pragma once
#include "Creature.h"
enum PlayerType
{
	PT_Knight = 1,
	PT_Archer = 2,
	PT_Mage = 3,

};
class Player : public Creature
{
protected:
	int _playerType;
public:
	Player(int playerType) :Creature(CT_PLAYER), _playerType(playerType)
	{

	}
	virtual ~Player()
	{

	}
	virtual void PrintInfo();


};
class Knight :public Player
{
public:
	Knight() : Player(PT_Knight)
	{
		_hp = 150;
		_attack = 15;
		_defense = 5;
	}
};
class Archer :public Player
{
public:

	Archer() : Player(PT_Archer)
	{
		_hp = 100;
		_attack = 20;
		_defense = 3;
	}
};
class Mage :public Player
{
public:

	Mage() : Player(PT_Mage)
	{
		_hp = 75;
		_attack = 50;
		_defense = 0;
	}
};


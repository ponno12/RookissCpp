#pragma once
#include "Creature.h"

enum MonsterType
{
	MT_SLIME = 1,
	MT_ORC = 2,
	MT_SKELETON = 3
};

class Monster : public Creature
{
public:
	Monster(int monsterType) :Creature(CT_MONSTER), _monsterType(monsterType)
	{

	}
	virtual void PrintInfo();
protected:
	int _monsterType;
};

class Slime : public Monster
{
public:
	Slime() : Monster(MT_SLIME)
	{
		_hp = 50;
		_attack = 5;
		_defense = 2;
	}

};
class Orc : public Monster
{
public:
	Orc() : Monster(MT_ORC)
	{
		_hp = 80;
		_attack = 10;
		_defense = 2;
	}

};
class Skeleton : public Monster
{
public:
	Skeleton() : Monster(MT_SKELETON)
	{
		_hp = 30;
		_attack = 10;
		_defense = 0;
	}

};
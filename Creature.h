#pragma once

enum CreatureType
{
	CT_PLAYER = 0,
	CT_MONSTER = 1,
};
class Creature
{
protected:
	int _creatureType;
	int _hp;
	int _attack;
	int _defense;
public:

	Creature(int creatureType) : _creatureType(creatureType),_hp(0),_attack(0),_defense(0)
	{

	}
	virtual ~Creature()
	{

	};
	virtual void PrintInfo() = 0;
	void OnAttackted(Creature* attacker);
	bool isDead() { return _hp <= 0; }
};


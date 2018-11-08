#ifndef STATE_H
#define STATE_H

#include<iostream>


using namespace std;
class Animation;

class State
{

public:
	virtual void idle(Animation* a)
	{
		cout << "State::Idling" << endl;
	}

	virtual void jumping(Animation* a)
	{
		cout << "State::Jumping" << endl;
	}

	virtual void climbing(Animation* a)
	{
		cout << "State::Climbing" << endl;
	}

	virtual void walking(Animation* a)
	{
		cout << "State::Walking" << endl;
	}

	virtual void swordmanship(Animation* a)
	{
		cout << "State::Swordmanship" << endl;
	}

	virtual void shoveling(Animation* a)
	{
		cout << "State::Shoveling" << endl;
	}

	virtual void hammering(Animation* a)
	{
		cout << "State::Hammering" << endl;
	}
};
#include"Climbing.h"
#include"Idle.h"
#include"Jumping.h"
#include"Walking.h"
#include"Swordmanship.h"
#include"Shoveling.h"
#include"Hammering.h"
#include"Animation.h"
#endif
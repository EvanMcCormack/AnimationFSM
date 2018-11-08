#ifndef IDLE_H
#define IDLE_H

#include "State.h"

using namespace std;

class Idle: public State
{
public:
	Idle();
	~Idle();
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void swordmanship(Animation* a);
	void shoveling(Animation* a);
	void hammering(Animation* a);
};

#endif
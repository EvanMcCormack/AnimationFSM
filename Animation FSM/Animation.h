#ifndef ANIMATION_H
#define ANIMATION_H

class State;

class Animation
{
	class State* current;
public:
	Animation();
	void setCurrent(State* s)
	{ current = s; }
	void idle();
	void jumping();
	void climbing();
	void walking();
	void swordmanship();
	void shoveling();
	void hammering();
};

#include"State.h"
//#include"Climbing.h"
//#include"Idle.h"
//#include"Jumping.h"
//#include"Walking.h"
//#include"Shoveling.h"
//#include"Hammering.h"
#endif


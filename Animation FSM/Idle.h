#ifndef IDLE_H
#define IDLE_H

#include"Animation.h"

using namespace std;

class Idle: public State
{
public:
	Idle();
	~Idle();
	void Jumping(Animation* a);
	void Climbing(Animation* a);
};

#endif
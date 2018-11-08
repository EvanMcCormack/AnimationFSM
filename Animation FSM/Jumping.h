#ifndef JUMPING_H
#define JUMPING_H
#include"Animation.h"

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idle(Animation* a);
	void swordmanship(Animation* a);
};

#endif
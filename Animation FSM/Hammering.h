#ifndef HAMMERING_H
#define HAMMERING_H
#include"State.h"

using namespace std;

class Hammering : public State
{
public:
	Hammering();
	~Hammering();
	void idle(Animation* a);
	void hammering(Animation* a);
};

#endif

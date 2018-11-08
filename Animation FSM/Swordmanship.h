#ifndef SWORDMANSHIP_H
#define SWORDMANSHIP_H
#include"State.h"

using namespace std;

class Swordmanship : public State
{
public:
	Swordmanship();
	~Swordmanship();
	void idle(Animation* a);
	void walking(Animation * a);
	void swordmanship(Animation* a);
};
#include "State.h"

#endif

#ifndef WALKING_H
#define WALKING_H

#include "State.h"

using namespace std;

class Walking : public State
{
public:
	Walking();
	~Walking();
	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void swordmanship(Animation* a);
};

#endif

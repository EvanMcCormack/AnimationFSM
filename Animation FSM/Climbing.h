#ifndef CLIMBING_H
#define CLIMBING_H
#include"State.h"

using namespace std;

class Climbing : public State
{
public:
	Climbing();
	~Climbing() ;
	void idle(Animation* a);
	void climbing(Animation * a);
};
#include "State.h"

#endif
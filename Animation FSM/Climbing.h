#ifndef CLIMBING_H
#define CLIMBING_H
#include"Animation.h"

using namespace std;

class Climbing : public State
{
public:
	Climbing();
	~Climbing() ;
	void idle(Animation* a);
};

#endif
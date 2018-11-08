#ifndef SHOVELING_H
#define SHOVELING_H
#include"State.h"

using namespace std;

class Shoveling : public State
{
public:
	Shoveling();
	~Shoveling();
	void idle(Animation* a);
	void shoveling(Animation* a);
};

#endif
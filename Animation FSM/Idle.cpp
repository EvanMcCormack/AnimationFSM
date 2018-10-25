#include "Idle.h"

Idle::Idle()
{
}

Idle::~Idle()
{
}

void Idle::Jumping(Animation* a)
{
	cout << "Jumping" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::Climbing(Animation* a)
{
	cout << "Climbing" << endl;
	a->setCurrent(new Idle());
	delete this;
}

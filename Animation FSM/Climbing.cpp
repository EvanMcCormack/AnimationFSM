#include "Climbing.h"

Climbing::Climbing()
{
}

Climbing::~Climbing()
{
}

void Climbing::idle(Animation * a)
{
	cout << "Going from Climbing to idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}

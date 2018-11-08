#include "Hammering.h"

Hammering::Hammering()
{
}

Hammering::~Hammering()
{
}

void Hammering::idle(Animation* a)
{
	cout << "Going from Hammering to Idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::hammering(Animation* a)
{
	cout << "Still Hammering" << endl;
	a->setCurrent(new Hammering());
	delete this;
}
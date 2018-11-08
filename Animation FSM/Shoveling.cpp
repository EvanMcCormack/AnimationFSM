#include "Shoveling.h"

Shoveling::Shoveling()
{
}

Shoveling::~Shoveling()
{
}

void Shoveling::idle(Animation* a)
{
	cout << "Going from Shoveling to Idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shoveling::shoveling(Animation* a)
{
	cout << "Still Shoveling" << endl;
	a->setCurrent(new Shoveling());
	delete this;
}
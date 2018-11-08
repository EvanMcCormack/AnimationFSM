#include "Jumping.h"

Jumping::Jumping()
{
}

Jumping::~Jumping()
{
}

void Jumping::idle(Animation * a)
{
	cout << "Going from Jumping to idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::swordmanship(Animation* a)
{
	cout << "Going from Jumping to swording" << endl;
	a->setCurrent(new Swordmanship());
	delete this;
}

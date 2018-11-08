#include "Swordmanship.h"

Swordmanship::Swordmanship()
{
}

Swordmanship::~Swordmanship()
{
}

void Swordmanship::idle(Animation * a)
{
	cout << "Going from Swording to idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Swordmanship::walking(Animation * a)
{
	cout << "Going from swording to walking" << endl;
	a->setCurrent(new Walking());
	delete this;
}

void Swordmanship::swordmanship(Animation* a)
{
	cout << "Still Swording" << endl;
	a->setCurrent(new Swordmanship());
	delete this;
}

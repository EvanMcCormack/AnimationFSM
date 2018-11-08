#include "Idle.h"

Idle::Idle()
{
	cout << "Idling." << endl;
}

Idle::~Idle()
{
}

void Idle::jumping(Animation* a)
{
	cout << "Jumping" << endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Idle::climbing(Animation* a)
{
	cout << "Climbing" << endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::walking(Animation* a)
{
	cout << "Walking" << endl;
	a->setCurrent(new Walking());
	delete this;
}

void Idle::swordmanship(Animation* a)
{
	cout << "Swordmanship" << endl;
	a->setCurrent(new Swordmanship());
	delete this;
}

void Idle::shoveling(Animation* a)
{
	cout << "Shoveling" << endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Idle::hammering(Animation* a)
{
	cout << "Hammering" << endl;
	a->setCurrent(new Hammering());
	delete this;
}
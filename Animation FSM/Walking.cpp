#include "Walking.h"

Walking::Walking()
{
}

Walking::~Walking()
{
}

void Walking::idle(Animation* a)
{
	cout << "Going from Idling to Walking" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Walking::climbing(Animation* a)
{
	cout << "Going from Walking to Climbing" << endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Walking::jumping(Animation* a)
{
	cout << "Going from Walking to Jumping" << endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Walking::walking(Animation* a)
{
	cout << "Still Walking" << endl;
	a->setCurrent(new Walking());
	delete this;
}

void Walking::swordmanship(Animation* a)
{
	cout << "Going from walking to swordmanship" << endl;
	a->setCurrent(new Swordmanship());
	delete this;
}
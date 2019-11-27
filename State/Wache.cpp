#include "pch.h"
#include "Wache.h"

Wache::Wache()
{
	_state = new WachePatrouillieren();
}


Wache::~Wache()
{
}

void Wache::handleInput(string input)
{
	WacheStatus* state = _state->handleInput(*this, input);
	if (state != nullptr)
	{
		_state->exit(*this);
		delete _state;
		_state = state;
		_state->entry(*this);
	}
}

void Wache::update()
{
	_state->update(*this);
	cout << "Futter count: " << food << endl;
}

#include "pch.h"
#include "WachePatrouillieren.h"


WachePatrouillieren::WachePatrouillieren()
{
}


WachePatrouillieren::~WachePatrouillieren()
{
}

WacheStatus* WachePatrouillieren::handleInput(Wache& wache, string input)
{
	if (input == "a")
		return new WacheVerteidigen();
	if (wache.food == 0)
		return new WacheEssen();

	return nullptr;
}

void WachePatrouillieren::update(Wache& wache)
{
	wache.food--;
	wache.PatrouilleOutput();
}

void WachePatrouillieren::entry(Wache& wache)
{
	cout << "entry: Waffe nehmen" << endl;
}

void WachePatrouillieren::exit(Wache& wache)
{
	cout << "exit: Position verlassen" << endl;
}

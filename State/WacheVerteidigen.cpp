#include "pch.h"
#include "WacheVerteidigen.h"


WacheVerteidigen::WacheVerteidigen()
{
}


WacheVerteidigen::~WacheVerteidigen()
{
}

WacheStatus * WacheVerteidigen::handleInput(Wache& wache, string input)
{
	if (input == "f")
		return new WacheEssen();

	return nullptr;
}

void WacheVerteidigen::update(Wache& wache)
{
	if (wache.food > 0)
		wache.food--;

	wache.VerteidigungOutput();
}

void WacheVerteidigen::entry(Wache & wache)
{
	cout << "entry: auf Mauer rennen" << endl;
}

void WacheVerteidigen::exit(Wache & wache)
{
	cout << "exit: Waffe ablegen" << endl;
}

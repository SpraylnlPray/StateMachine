#include "pch.h"
#include "WacheEssen.h"


WacheEssen::WacheEssen()
{
}


WacheEssen::~WacheEssen()
{
}

WacheStatus* WacheEssen::handleInput(Wache& wache, string input)
{
	if (wache.food == 10)
		return new WachePatrouillieren();

	return nullptr;
}

void WacheEssen::update(Wache& wache)
{
	wache.food += 2;
	if (wache.food >= 10)
		wache.food = 10;
	wache.EssenOutput();
}

void WacheEssen::entry(Wache& wache)
{
	cout << "entry: hinsetzen" << endl;
}

void WacheEssen::exit(Wache & wache)
{
	cout << "exit: aufstehen" << endl;
}

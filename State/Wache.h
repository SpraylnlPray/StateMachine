#pragma once
#include "WacheStatus.h"
#include "WachePatrouillieren.h"
 #include <string>
#include <iostream>

using namespace std;

class Wache
{
public:
	Wache();
	~Wache();
	virtual void handleInput(string input);
	virtual void update();
	void PatrouilleOutput() { cout << "am patrouillieren" << endl; }
	void VerteidigungOutput() { cout << "am verteidigen" << endl; }
	void EssenOutput() { cout << "am essen" << endl; }
	int food = 10;
	WacheStatus* _state;
};


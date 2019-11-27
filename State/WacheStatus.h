#pragma once
#include <iostream>
#include <string>

using namespace std;

class Wache;

class WacheStatus
{
public:
	WacheStatus();
	virtual ~WacheStatus() {}
	virtual WacheStatus* handleInput(Wache& wache, string Input) { return nullptr; }
	virtual void update(Wache& wache) {}
	virtual void entry(Wache& wache) {}
	virtual void exit(Wache& wache) {}
};


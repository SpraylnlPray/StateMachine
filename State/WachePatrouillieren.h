#pragma once
#include "Wache.h"
#include "WacheVerteidigen.h"
#include "WacheEssen.h"

class WachePatrouillieren :
	public WacheStatus
{
public:
	WachePatrouillieren();
	~WachePatrouillieren();
	WacheStatus* handleInput(Wache& wache, string input) override;
	void update(Wache& wache) override;
	void entry(Wache& wache) override;
	void exit(Wache& wache) override;
};


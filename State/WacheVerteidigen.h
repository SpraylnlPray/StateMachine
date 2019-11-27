#pragma once
#include "Wache.h"
#include "WacheEssen.h"

class WacheVerteidigen :
	public WacheStatus
{
public:
	WacheVerteidigen();
	~WacheVerteidigen();
	WacheStatus* handleInput(Wache& wache, string input) override;
	void update(Wache& wache) override;
	void entry(Wache& wache) override;
	void exit(Wache& wache) override;
};


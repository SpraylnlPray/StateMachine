#pragma once
#include "Wache.h"
#include "WacheStatus.h"
#include "WachePatrouillieren.h"

class WacheEssen :
	public WacheStatus
{
public:
	WacheEssen();
	~WacheEssen();
	WacheStatus* handleInput(Wache& wache, string input) override;
	void update(Wache& wache) override;
	void entry(Wache& wache) override;
	void exit(Wache& wache) override;
};

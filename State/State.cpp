#include "pch.h"
#include "Wache.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Wache* wache = new Wache();
	string input = "init";
	while (input != "e")
	{
		wache->handleInput(input);
		wache->update();
		getline(cin, input);
	}
}

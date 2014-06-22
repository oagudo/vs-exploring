// DummyApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Dummy.h>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	DummyLibrary::Dummy d;
	std::cout << d.GetVersion() << std::endl;
	std::cout << "Press any key to continue ...";
	std::cin.ignore();
	return 0;
}


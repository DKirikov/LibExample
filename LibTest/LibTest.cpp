// LibTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StatLibTest.h"

#include <cstdio>
#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
	std::cout << "Using functions:\n";

  int lastSum = GetLastSum();
  std::cout << "last sum = " << lastSum << "\n";
  lastSum = CalculateSum(3, 4);
  std::cout << "3 + 4 = " << lastSum << "\n";
  lastSum = GetLastSum();
  std::cout << "last sum = " << lastSum << "\n";
  lastSum = CalculateSum(1, 2);
  std::cout << "1 + 2 = " << lastSum << "\n";
  lastSum = GetLastSum();
  std::cout << "last sum = " << lastSum << "\n";

  ////////////////////////////////Using StatLibTest class://///////////
  std::cout << "\nUsing DinLibTest class:\n";

  StatLibTest statLibTest;
  statLibTest.SetA(3);
  int a = statLibTest.GetA();
  std::cout << "a = " << a << "\n";
  statLibTest.SetA(7);
  int a2 = statLibTest.GetA();
  std::cout << "a2 = " << a2 << "\n";

  std::cin.get();
	return 0;
}
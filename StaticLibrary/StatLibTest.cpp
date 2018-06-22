#include "stdafx.h"
#include "StatLibTest.h"

////////////////////////////////Using functions://///////////
int lastSum = 0;

int GetLastSum()
{
  return lastSum;
}

int CalculateSum(int a, int b)
{
  lastSum = a + b;
  return lastSum;
}


////////////////////////////////Using StatLibTest class://///////////
StatLibTest::StatLibTest()
{
  a = 1;
}

StatLibTest::~StatLibTest()
{
}

int StatLibTest::GetA()
{
  return a;
}

void StatLibTest::SetA(int _a)
{
  a = _a;
}
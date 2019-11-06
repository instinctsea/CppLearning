#include "pch.h"
#include "Operator.h"


Operator::Operator()
{
}

int Operator::Plus(int a, int b)
{
	return a + b;
}

int Operator::Sub(int a, int b)
{
	return a - b;
}

int Operator::PlusPoint(int* a, int *b)
{
	return *a + *b;
}

Operator::~Operator()
{
}

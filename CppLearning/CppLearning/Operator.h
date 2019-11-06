#pragma once
class Operator
{
public:
	Operator();
	int Plus(int, int);
	int Sub(int, int);

	//使用指针进行传址
	int PlusPoint(int*, int*);
	~Operator();
};


#pragma once
class Operator
{
public:
	Operator();
	int Plus(int, int);
	int Sub(int, int);

	//ʹ��ָ����д�ַ
	int PlusPoint(int*, int*);
	~Operator();
};


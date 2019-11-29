#include "stdafx.h"
#include "TestC.h"
#include "Stu.h"
#include "clib.h"
int CDo()
{
	Stu stu;
	int value = stu.SSS();

	int value2 = CppAdd(value,2);
	return value2;
}


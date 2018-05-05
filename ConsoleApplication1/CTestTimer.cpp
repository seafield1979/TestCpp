#include "stdafx.h"
#include "CTest.hpp"
#include <Windows.h>

void CTestTimer::test1()
{
	LARGE_INTEGER qpf;
	if (!QueryPerformanceFrequency(&qpf)) {
		/* error */
	}

	LARGE_INTEGER qpc;
	if (!QueryPerformanceCounter(&qpc)) {
		/* error */
	}
	printf("qpf=%lld, qpc=%lld, sec=%5.10f\n", qpf.QuadPart, qpc.QuadPart, (double)qpc.QuadPart / (double)qpf.QuadPart);

	// èàóùéûä‘Çåvë™
	if (!QueryPerformanceCounter(&qpc)) {
		/* error */
	}
	getchar();

	LARGE_INTEGER qpc2;
	if (!QueryPerformanceCounter(&qpc2)) {
		/* error */
	}

	printf("sec=%5.10f\n", (double)(qpc2.QuadPart - qpc.QuadPart) / (double)qpf.QuadPart);
}

void CTestTimer::test2()
{

}

void CTestTimer::test3()
{

}

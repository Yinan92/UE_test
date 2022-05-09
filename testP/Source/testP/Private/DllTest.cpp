#include "DllTest.h"

void ADllTest::HelloDll()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 200.f, FColor::Blue, TEXT("Hello Dll"));
	}
}
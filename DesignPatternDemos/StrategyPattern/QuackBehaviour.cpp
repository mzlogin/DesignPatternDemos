#include "QuackBehaviour.h"
#include <stdio.h>

/////	CQuack
void CQuack::Quack()
{
	printf("Quack.\n");
}

/////	CMuteQuack
void CMuteQuack::Quack()
{
	printf("Silence.\n");
}

/////	CSqueak
void CSqueak::Quack()
{
	printf("Squeak.\n");
}
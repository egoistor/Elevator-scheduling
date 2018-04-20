#include<iostream>
#include "elevator.h"
#include<math.h>
int elevator::goToFloor(int i,int j)
{
	i += abs(i - j); 
	return i;
}
int elevator::stop(int i)
{
	i++;
	return i;
}
int elevator::wait(int i, int j)
{
	i += abs(i - j);
	return i;
}
elevator::elevator()
{
}

elevator::~elevator()
{
}


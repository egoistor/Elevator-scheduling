#include<iostream>
#include<queue>
#include<fstream>
#include"elevator.h"
#include<math.h>
#include<stdlib.h>
#include <algorithm> 
using namespace std;
int time=0;
class custom
{
public:
	int requesttime;
	int fromfloor;
	int tofloor;
	custom();
	~custom();

private:

};

custom::custom()
{
}

custom::~custom()
{
}
int main()
{
	ifstream infile("./input.txt");
	ofstream outfile("./output.txt", ios::app);
	int n;
	infile >> n;
	custom cus[1000];
	int i ;
	for (i = 0; i < n; i++)
	{
		infile >> cus[i].requesttime;
		infile >> cus[i].fromfloor;
		infile >> cus[i].tofloor;
	}
	infile.close();
	elevator ele;
	sort(&cus[0].fromfloor,&cus[n - 1].fromfloor);
	for (i = 0; i<n;)
	{
		time+=ele.goToFloor(cus[i].fromfloor , ele.currentFloor);
		if (time<cus[i].requesttime)
		{
			time += ele.wait(time, cus[i].requesttime);
		}
		time = ele.stop(time);
		ele.currentFloor = cus[i].fromfloor;
		outfile << time << ele.currentFloor<<endl;
		i++;
	}
	ele.currentFloor = cus[n-1].fromfloor;
	sort(&cus[0].tofloor, &cus[n - 1].tofloor);
	for (i = 0; i<n;)
	{
		time+=ele.goToFloor(cus[i].tofloor,ele.currentFloor);
		time = ele.stop(time);
		ele.currentFloor = cus[i].fromfloor;
		outfile << time << ele.currentFloor<<endl;
		i++;
	}
	outfile.close();
	return 0;
}
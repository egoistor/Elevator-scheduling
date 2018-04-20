#ifndef elevator_H
#define elevator_H
using namespace std;
class elevator
{
public:
	int currentFloor=0; //当前位置
	elevator();
	~elevator();
	int goToFloor(int i,int j); //前往楼层
	int stop(int i); //停靠在当前楼层
	int wait(int i, int j);//等待
};

#endif // !elevator_H

#ifndef elevator_H
#define elevator_H
using namespace std;
class elevator
{
public:
	int currentFloor=0; //��ǰλ��
	elevator();
	~elevator();
	int goToFloor(int i,int j); //ǰ��¥��
	int stop(int i); //ͣ���ڵ�ǰ¥��
	int wait(int i, int j);//�ȴ�
};

#endif // !elevator_H


#include "Observer.h"
class Subject
{
public:
	void virtual Add(Observer *){};//����۲���
	void virtual Remove(Observer *){};//�Ƴ��۲���
	void virtual Notify(){};//֪ͨ�۲���
};

#include "Observer.h"
class Subject
{
public:
	void virtual Add(Observer *){};//加入观察者
	void virtual Remove(Observer *){};//移除观察者
	void virtual Notify(){};//通知观察者
};
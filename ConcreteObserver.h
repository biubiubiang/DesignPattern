
#include "Observer.h"
#include "ConcreteSubject.h"
#include <string>
#include <iostream>
using namespace std;
class ConcreteObserver : public Observer
{
public:
	ConcreteObserver(string subname, Subject* subject) : sub(subject), name(subname){}//具体观察者构造函数
	void Update(int state_value)//实现发生改变时更新
	{
		cout << name << " get the Update,Curent State:" << state_value << endl;
	}
private:
	Subject* sub;
	string name;
};
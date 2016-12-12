
#include "Subject.h"
#include "Observer.h"
#include <list>
using namespace std;
class ConcreteSubject : public Subject
{
public:
	void Add(Observer* ob)//实现加入观察者
	{
		observers.push_back(ob);
	}
	void Remove(Observer* ob)//实现移除观察者
	{
		observers.remove(ob);
	}
	void Notify()//实现逐个通知观察者
	{
		list<Observer*>::iterator it;
		for (it = observers.begin(); it != observers.end(); it++)
		{
			(*it)->Update(obstate);
		}
	}
	void SetState(int state)//设置当前状态以便观察
	{
		obstate = state;
	}
private:
	list<Observer*> observers;
	int obstate;
};

/*void ConcreteSubject::Add(Observer* ob)
{
	observers.push_back(ob);
}

void ConcreteSubject::Remove(Observer* ob)
{
	observers.remove(ob);
}

void ConcreteSubject::Notify()
{
	list<Observer*>::iterator it;
	for (it = observers.begin(); it != observers.end(); it++)
	{
		(*it)->Update(obstate);
	}
}

void ConcreteSubject::SetState(int state)
{
	obstate = state;
}*/
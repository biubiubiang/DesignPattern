
#include "Subject.h"
#include "Observer.h"
#include <list>
using namespace std;
class ConcreteSubject : public Subject
{
public:
	void Add(Observer* ob)//ʵ�ּ���۲���
	{
		observers.push_back(ob);
	}
	void Remove(Observer* ob)//ʵ���Ƴ��۲���
	{
		observers.remove(ob);
	}
	void Notify()//ʵ�����֪ͨ�۲���
	{
		list<Observer*>::iterator it;
		for (it = observers.begin(); it != observers.end(); it++)
		{
			(*it)->Update(obstate);
		}
	}
	void SetState(int state)//���õ�ǰ״̬�Ա�۲�
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
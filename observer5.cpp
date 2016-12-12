// observer5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <string>
#include "ConcreteObserver.h"
using namespace std;

/*class Observer
{
public:
	virtual void Update(int) = 0;//发生改变时更新
};

class Subject
{
public:
	virtual void Add(Observer *) = 0;//加入观察者
	virtual void Remove(Observer *) = 0;//移除观察者
	virtual void Notify() = 0;//通知观察者
};

class ConcreteObserver : public Observer
{
public:
	ConcreteObserver(string subname , Subject *subject) : sub(subject),name(subname){}//具体观察者构造函数
	void Update(int value)//实现发生改变时更新
	{
		cout << name << " get the update.New State:" << value << endl;
	}
private:
	Subject* sub;
	string name;
};

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
		std::list < Observer*>::iterator it = observers.begin();
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
};*/
int _tmain(int argc, _TCHAR* argv[])
{
	//创建目标
	ConcreteSubject* sub = new ConcreteSubject();
	
	//创建观察者
	Observer* ob1 = new ConcreteObserver("ob1",sub);
	Observer* ob2 = new ConcreteObserver("ob2",sub);
	
	//改变状态
	sub->SetState(2);
	
	//观察者加入队列
	sub->Add(ob1);
	sub->Add(ob2); 
	
	sub->Notify();
	
	//移除观察者
	sub->Remove(ob2);
	
	sub->SetState(3);
	sub->Notify();
	return 0;
}


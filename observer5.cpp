// observer5.cpp : �������̨Ӧ�ó������ڵ㡣
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
	virtual void Update(int) = 0;//�����ı�ʱ����
};

class Subject
{
public:
	virtual void Add(Observer *) = 0;//����۲���
	virtual void Remove(Observer *) = 0;//�Ƴ��۲���
	virtual void Notify() = 0;//֪ͨ�۲���
};

class ConcreteObserver : public Observer
{
public:
	ConcreteObserver(string subname , Subject *subject) : sub(subject),name(subname){}//����۲��߹��캯��
	void Update(int value)//ʵ�ַ����ı�ʱ����
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
		std::list < Observer*>::iterator it = observers.begin();
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
};*/
int _tmain(int argc, _TCHAR* argv[])
{
	//����Ŀ��
	ConcreteSubject* sub = new ConcreteSubject();
	
	//�����۲���
	Observer* ob1 = new ConcreteObserver("ob1",sub);
	Observer* ob2 = new ConcreteObserver("ob2",sub);
	
	//�ı�״̬
	sub->SetState(2);
	
	//�۲��߼������
	sub->Add(ob1);
	sub->Add(ob2); 
	
	sub->Notify();
	
	//�Ƴ��۲���
	sub->Remove(ob2);
	
	sub->SetState(3);
	sub->Notify();
	return 0;
}


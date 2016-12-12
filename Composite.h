#pragma once

#include <list>

using namespace std;
class Component
{
public:
	//��ʾ����
	virtual void Operation() = 0;
	virtual void Add(Component*);
	virtual void Remove(Component*);
	virtual Component* GetChild(int index);
	virtual ~Component();
protected:
	Component();
};

//Leaf��Ҷ�ӽ��
class Leaf :public Component
{
public:
	virtual void Operation();
	Leaf();
	~Leaf();
};

//Composite���������������
class Composite :public Component
{
public:
	Composite();
	~Composite();
	void Operation();
	void Add(Component*);
	void Remove(Component*);
	Component* GetChild(int index);
private:
	list<Component*> m_Com;
};
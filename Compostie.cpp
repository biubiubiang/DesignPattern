#include "Composite.h"
#include <iostream>

using namespace std;

Component::Component()
{}

Component::~Component()
{}

void Component::Add(Component* com)
{
	cout << "add" << endl;
}

void Component::Remove(Component* com)
{
}

void Component::Operation()
{
	cout << "Component::Operation" << endl;
}

Component* Component::GetChild(int index)
{
	return NULL;
}


Leaf::Leaf()
{}

Leaf::~Leaf()
{}

void Leaf::Operation()
{
	cout << "Leaf::Operation" << endl;
}

Composite::Composite()
{
}

Composite::~Composite()
{}

void Composite::Add(Component* com)
{
	this->m_Com.push_back(com);
}

void Composite::Remove(Component* com)
{
	this->m_Com.remove(com);
}

void Composite::Operation()
{
	cout << "Composite::Operation" << endl;
	list<Component*>::iterator iter = this->m_Com.begin();
	for (; iter != this->m_Com.end(); iter++)
	{
		(*iter)->Operation();
	}
}

Component* Composite::GetChild(int index)
{
	if (index <= 0 || index > this->m_Com.size())
	{
		return NULL;
	}
	list<Component*>::iterator iter1, iter2;
	int i;
	for (i = 1, iter1 = m_Com.begin(), iter2 = m_Com.end(); iter1 != iter2; iter1++, i++)
	{
		if (i == index)
			break;
	}
	return *iter1;
}
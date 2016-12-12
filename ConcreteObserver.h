
#include "Observer.h"
#include "ConcreteSubject.h"
#include <string>
#include <iostream>
using namespace std;
class ConcreteObserver : public Observer
{
public:
	ConcreteObserver(string subname, Subject* subject) : sub(subject), name(subname){}//����۲��߹��캯��
	void Update(int state_value)//ʵ�ַ����ı�ʱ����
	{
		cout << name << " get the Update,Curent State:" << state_value << endl;
	}
private:
	Subject* sub;
	string name;
};
#pragma once
#include "Command.h"
#include <string>
#include <iostream>
using namespace std;
class CommandInput : public Command
{
public:
	CommandInput(const string &input)//�������
	{
		c_input = input;
	}
	void ShowString()//��ʾ��ǰջ���ַ���
	{
		cout << "current stack top:" << c_input.c_str() << endl;
	}
private:
	string c_input;
};
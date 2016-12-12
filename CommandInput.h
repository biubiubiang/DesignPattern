#pragma once
#include "Command.h"
#include <string>
#include <iostream>
using namespace std;
class CommandInput : public Command
{
public:
	CommandInput(const string &input)//ÃüÁî£ºÊäÈë
	{
		c_input = input;
	}
	void ShowString()//ÏÔÊ¾µ±Ç°Õ»¶¥×Ö·û´®
	{
		cout << "current stack top:" << c_input.c_str() << endl;
	}
private:
	string c_input;
};
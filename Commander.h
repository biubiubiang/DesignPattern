#pragma once
#include "Command.h"
#include <iostream>
#include <stack>
using namespace std;
class Commander
{
public:
	Commander(Command* Cmd)//构造函数
	{
		undo_stack.push(Cmd);
	}
	void ExecuteCommand(Command* Cmd)//将命令对象加入undo栈
	{
		Cmd->ShowString();
		undo_stack.push(Cmd);
	}
	void Undo()//撤销
	{
		if (undo_stack.size() < 2)
		{
			cout << "fail to undo" << endl;
			return;
		}
		cout << "undo:" << endl;
		auto Cmd = undo_stack.top();//Undo栈顶给Cmd
		redo_stack.push(Cmd);//Cmd进Redo栈
		undo_stack.pop();//Undo栈顶出栈
		Cmd = undo_stack.top();//下一个栈顶给Cmd
		Cmd->ShowString();
	}
	void Redo()//重做
	{
		if (redo_stack.empty())
		{
			cout << "fail to redo" << endl;
			return;
		}

		cout << "redo:" << endl;
		auto Cmd = redo_stack.top();
		Cmd->ShowString();
		redo_stack.pop();
		undo_stack.push(Cmd);
	}
private:
	stack<Command*> undo_stack;
	stack<Command*> redo_stack;
};
#pragma once
#include "Command.h"
#include <iostream>
#include <stack>
using namespace std;
class Commander
{
public:
	Commander(Command* Cmd)//���캯��
	{
		undo_stack.push(Cmd);
	}
	void ExecuteCommand(Command* Cmd)//������������undoջ
	{
		Cmd->ShowString();
		undo_stack.push(Cmd);
	}
	void Undo()//����
	{
		if (undo_stack.size() < 2)
		{
			cout << "fail to undo" << endl;
			return;
		}
		cout << "undo:" << endl;
		auto Cmd = undo_stack.top();//Undoջ����Cmd
		redo_stack.push(Cmd);//Cmd��Redoջ
		undo_stack.pop();//Undoջ����ջ
		Cmd = undo_stack.top();//��һ��ջ����Cmd
		Cmd->ShowString();
	}
	void Redo()//����
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
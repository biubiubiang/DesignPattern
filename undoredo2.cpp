// undoredo2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "Commander.h"
#include "CommandInput.h"
using namespace std;

//int _tmain(int argc, _TCHAR* argv[])
void main()
{
	int sel;
	string input;
	Commander *cmdr = new Commander(new CommandInput("[empty]"));
	cout << "please input your command" << endl;
	cout << "1.Undo,2.Redo,3.Insert,4.Exit" << endl;
	for (int i = 0; i < 100; i++)
	{
		cin >> sel;
		switch (sel)
		{
		case 1:
			cmdr->Undo();
			break;
		case 2:
			cmdr->Redo();
			break;
		case 3:
		{
			cin >> input;
			cmdr->ExecuteCommand(new CommandInput(input));
			break;
		}
		case 4:
		{
			delete cmdr;
			i = 100;
			break;
		}
		}
	}
}


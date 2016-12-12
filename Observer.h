#pragma once
class Observer
{
public:
	void virtual Update(int) = 0;//发生改变时更新
};
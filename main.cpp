#include "Composite.h"
#include <iostream>

using namespace std;

int main()
{
	Composite* pRoot = new Composite();

	//组合对象添加叶子节点
	pRoot->Add(new Leaf());

	Leaf* pLeaf1 = new Leaf();
	Leaf* pLeaf2 = new Leaf();

	pLeaf1->Add(pLeaf2);
	pLeaf1->Remove(pLeaf2);
	//执行叶子Operation操作
	pLeaf1->Operation();

	Composite* pCom = new Composite();
	//添加叶子节点
	pCom->Add(pLeaf1);
	//添加叶子节点
	pCom->Add(pLeaf2);
	//Operation操作
	pCom->Operation();

	//添加组合对象
	pRoot->Add(pCom);

	//Operation操作
	pRoot->Operation();

	return 0;
}
#include "Composite.h"
#include <iostream>

using namespace std;

int main()
{
	Composite* pRoot = new Composite();

	//��϶������Ҷ�ӽڵ�
	pRoot->Add(new Leaf());

	Leaf* pLeaf1 = new Leaf();
	Leaf* pLeaf2 = new Leaf();

	pLeaf1->Add(pLeaf2);
	pLeaf1->Remove(pLeaf2);
	//ִ��Ҷ��Operation����
	pLeaf1->Operation();

	Composite* pCom = new Composite();
	//���Ҷ�ӽڵ�
	pCom->Add(pLeaf1);
	//���Ҷ�ӽڵ�
	pCom->Add(pLeaf2);
	//Operation����
	pCom->Operation();

	//�����϶���
	pRoot->Add(pCom);

	//Operation����
	pRoot->Operation();

	return 0;
}
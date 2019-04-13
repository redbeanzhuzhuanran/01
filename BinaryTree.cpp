// BinaryTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "SelfTree.h"

using namespace std;

int main()
{
	SelfTree::BinaryTree a;
	a.CreatTree(cin, a.get_address());
	a.preTraverse(a.get_address()); //先序
	a.midTraverse(a.get_address()); //中序
	a.postTraverse(a.get_address()); //后序
    
}


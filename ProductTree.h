#pragma once
#include "ProductTreeLeaf.h"
#include "ProductTreeQuantity.h"
#include <iostream>
class ProductTree
{
public:
	ProductTree() { mainroot = NULL; }
	void Insert(Product item);
	/*ProductTreeLeaf* Search(Product item);*/
	void PrintTopTen();
	void inorderPrint();
	


private: 
	ProductTreeLeaf * mainroot;
	void inorderPrint(ProductTreeLeaf* root);
	void Insert(Product item, ProductTreeLeaf * root);
	bool Search(Product item, ProductTreeLeaf * root);
	void PrintTopTen(ProductTreeLeaf * root);
	void TreeTraversalPostOrder(ProductTreeQuantity*  quantitiytree,ProductTreeLeaf * root);
};


#include "ProductTreeLeaf.h"


#pragma once
class ProductTreeQuantity
{
public:
	ProductTreeQuantity();
	void Insert(Product item);
	void PrintTopTen();

private:
	ProductTreeLeaf* mainroot;
	void Insert(Product item, ProductTreeLeaf* root);
	void PrintTopTen(ProductTreeLeaf * root);



};


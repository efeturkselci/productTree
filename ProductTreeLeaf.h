#pragma once
class ProductTreeLeaf
{
public:
	Product product;
	ProductTreeLeaf *left;
	ProductTreeLeaf * right;

	ProductTreeLeaf() { left = right = NULL; }
};


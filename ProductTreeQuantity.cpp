#include "pch.h"
#include "ProductTreeQuantity.h"


ProductTreeQuantity::ProductTreeQuantity()
{
	mainroot = NULL;
}

void ProductTreeQuantity::Insert(Product item)
{
	if (mainroot == NULL)
	{
		mainroot = new ProductTreeLeaf();
		mainroot->product = item;

	}
	else
	{
			Insert(item, mainroot);
	}
}

void ProductTreeQuantity::Insert(Product item, ProductTreeLeaf* root) //key=item, leaf=root leaf->value=root->product.getquantity 
{

}

void ProductTreeQuantity::PrintTopTen()
{
	PrintTopTen(mainroot);
}

void ProductTreeQuantity::PrintTopTen(ProductTreeLeaf* root)
{
	//inorder
	//right
	//cout
	//left

	
}

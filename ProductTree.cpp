#include "pch.h"
#include "ProductTree.h"


void ProductTree::Insert(Product item)
{
	if (mainroot == NULL)
	{
		mainroot = new ProductTreeLeaf();
		mainroot->product = item;
			
	}
	else
	{
		bool result=Search(item,mainroot);
		if (result == false)
		{
			Insert(item, mainroot);
		}
	}


}

void ProductTree::Insert(Product item, ProductTreeLeaf * root)//key=item , root=leaf
{
	if (item.GetStockCode() < root->product.GetStockCode())
	{
		if (root->left != NULL)
		{
			Insert(item, root->left);
		}
		else
		{
			root->left = new ProductTreeLeaf();
			root->left->product= item;
		}
	}

	else if (item.GetStockCode() >= root->product.GetStockCode()) 
	{
		if (root->right != NULL) 
		{
			Insert(item, root->right);
		}
		else
		{
			root->right = new ProductTreeLeaf;
			root->right->product = item;
		}
	}
	
}

//ProductTreeLeaf* ProductTree::Search(Product item)
//{
//
//}

bool ProductTree::Search(Product item, ProductTreeLeaf * root)
{
	bool result = false;

	if (root == NULL)
	{
		return false;
	}
	else
	{
		if (root->product.GetStockCode() == item.GetStockCode())
		{
			root->product.IncreaseQuantity(item.GetQuantity());
			return true;
		}

		else if (root->product.GetStockCode() > item.GetStockCode())
		{
			result= Search(item, root->left);
			return result;
		}
		else //item >=root
		{
			result= Search(item, root->right);
			return result;
		}
	}

	return result;
}


void ProductTree::PrintTopTen()
{
	PrintTopTen(mainroot);
}

void ProductTree::inorderPrint(ProductTreeLeaf* root)
{
	if (root != NULL)
	{
		inorderPrint(root->left); 
		cout<< root->product.GetStockCode() << endl;
		inorderPrint(root->right);
	}
}

void ProductTree::inorderPrint() 
{
	inorderPrint(mainroot);
}


void ProductTree::PrintTopTen(ProductTreeLeaf * root)
{
	ProductTreeQuantity* quantitiytree = new ProductTreeQuantity();


}

void ProductTree::TreeTraversalPostOrder(ProductTreeQuantity*  quantitiytree,ProductTreeLeaf * root)
{
	if (root != NULL)
	{
		TreeTraversalPostOrder(quantitiytree, root->left);
		TreeTraversalPostOrder(quantitiytree, root->right);
		quantitiytree->Insert(root->product);
		//delete root;
	}
}
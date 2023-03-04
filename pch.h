// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef Product_H
#define Product_H

#include <string>
using namespace std;



class Product
{
private:
    string StockCode;
	string Description;
	int Quantity;
public:
	Product(string stockcode, string description, int quantity);
	Product();
	string GetStockCode() { return StockCode; }
	string GetDescription() { return Description; }
	int GetQuantity() { return Quantity; }

	

	void IncreaseQuantity(int quantity);

};

#endif //Product_H



//#ifndef ProductTree_H
//#define ProductTree_H
//
//
//class ProductTree
//{
//public:
//	ProductTree()
//	{
//		root = NULL;
//	}
//
//
//private: 
//	ProductTree* root;
//
//
//};




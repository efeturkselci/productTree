// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
#include <string>
using namespace std;


Product::Product(string stockcode, string description, int quantity)
{
	StockCode = stockcode;
	Description = description;
	Quantity = quantity;
}

void Product::IncreaseQuantity(int quantity)
{
	Quantity += quantity;
}

Product::Product()
{

}

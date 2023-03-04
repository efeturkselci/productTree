// Course....
// Term Project 
// Efe Türkselci

#include "pch.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "ProductTree.h"
#include <string>
using namespace std;


void ReadFile(ProductTree*);

int main()
{
	
	
	ProductTree* tree = new ProductTree();
	ReadFile(tree);
	tree->inorderPrint();
	return 0;
}

//Read File
void ReadFile(ProductTree* tree)
{
	try
	{
		ifstream f("csv_20.csv");
		string line;
		string data;

		int x = 0;
		getline(f, line); //ilk satırı al ve geç
		while (getline(f,line) && x < 100) //getline parametrelerri aderes operatoruyle alıyor
		{
			//cout << line << endl;
			stringstream stream(line);
			int i = 1;
			Product* p;
			string stockcode = "";
			string description = "";
			int quantity = 0;

			while (getline(stream, data, ';'))
			{
				//cout << data << endl;
				if (i == 2)
				{
					stockcode = data;
				}
				else if(i==3)
				{
					description = data;
				}
				else if (i == 4)
				{
					quantity = stoi(data);
				}
				i++;
				if (i > 4)
				{
					break;
				}
			}
			p = new Product(stockcode, description, quantity);
			tree->Insert(*p);

			cout << endl;
			x++;
		}
	}
	catch (exception& ex)
	{
		cout << "Dosya bulunamadi";
	}
}

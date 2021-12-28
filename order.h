#pragma once
#include<iostream>
using namespace std;
class order
{
public:
	int OrderID;
	int CustomerID;
	string CustomerName;
	int productId;
	string prductName;

	void SetOrderID();
	void SetCustomerID();
	void SetCustomerName();
	void SetproductId();
	void SetprductName();
	void pack();
	void unpack();
	void dispaly();
	void displayAll();
	
};


/* Jeremy 
 ITSE 1307
 Programming problem shopping cart 
 Programming a set of items purchased by someone

 Use input to put in numbers for the vairable and once that is done the program will spit out the right number below 200 does not come with free shipping
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
	// Variables 
	double dbTotalPrice = 1;
	double dbItem1 = 1;
	double dbItem2 = 2;
	double dbItem3 = 3;
	double dbItem4 = 4;
	double dbItem5 = 5;

	//equations for the input
	cout << "Total of Item 1: ";
	cin >> dbItem1;

	cout << "Total of Item 2: ";
	cin >> dbItem2;
	
	cout << "Total of Item 3: ";
	cin >> dbItem3;

	cout << "Total of Item 4: ";
	cin >> dbItem4;

	cout << "Total of Item 5: ";
	cin >> dbItem5;

	cout << "Bill amount: " << dbItem1 + dbItem2 + dbItem3 + dbItem4 + dbItem5 + 50;

	//Determines if there is free shipping or not
	if (dbTotalPrice > 200)
		cout << "Free Shipping" << endl;

    return 0;
}


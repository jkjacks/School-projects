#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;  

double g_tab = 0;
int g_items = 0;

vector <string> items(0);



int menu () {
	cout << "CURRENT TAB: " << g_tab << " items-" << g_items << endl;
	cout << "Please select an option:" << endl;
	cout << "1. Beverages" << endl;
	cout << "2. Baked Goods" << endl;
	cout << "3. Fruits" << endl;
	cout << "4. Candy" << endl;
	cout << "5. Exit" << endl;
	int menuOption = 0;
	cin >> menuOption;
	if ((menuOption < 1)||(menuOption > 5))
		{
		cout << "That is not a valid option";
		menuOption = 5;
		}
	return (menuOption);
}

int beverages () {
	cout << "CURRENT TAB: " << g_tab << " items-" << g_items << endl;
	cout << "Please select an option:" << endl;
	cout << "1. Coffee \t $1.99" << endl;
	cout << "2. Tea \t $1.99" << endl;
	cout << "3. Coke \t $3.99" << endl;
	cout << "4. Diet Coke \t $3.99" << endl;
	cout << "5. Water \t $4.99" << endl;
	cout << "6. Exit" << endl;
	int menuOption = 0;
	cin >> menuOption;
	if ((menuOption < 1)||(menuOption > 6))
		{
		cout << "That is not a valid option";
		menuOption = 6;
		}
		
	items.push_back(1);	//add 1 cell to vector
	
	switch {
		case 1: 
			g_tab = g_tab + 1.99;
			g_items = g_items + 1;
			items [g_items] = 'Coffee';
			break;
		case 2: 
			g_tab = g_tab + 1.99;
			g_items = g_items + 1;
			items [g_items] = 'Tea';
			break;
		case 3: 
			g_tab = g_tab + 3.99;
			g_items = g_items + 1;
			items [g_items] = 'Coke';
			break;
		case 4: 
			g_tab = g_tab + 3.99;
			g_items = g_items + 1;
			items [g_items] = 'Diet Coke';
			break;
		case 5: 
			g_tab = g_tab + 4.99;
			g_items = g_items + 1;
			items [g_items] = 'Water';
			break;
		}
	
	return 0;
}

int baked () {
	cout << "CURRENT TAB: " << g_tab << " items-" << g_items << endl;
	cout << "Please select an option:" << endl;
	cout << "1. Bread \t $2.99" << endl;
	cout << "2. Pie \t $3.99" << endl;
	cout << "3. Cake \t $3.99" << endl;
	cout << "4. Doughnut \t $0.99" << endl;
	cout << "5. Cake pop \t $1.99" << endl;
	cout << "6. Exit" << endl;
	int menuOption = 0;
	cin >> menuOption;
	if ((menuOption < 1)||(menuOption > 6))
		{
		cout << "That is not a valid option";
		menuOption = 6;
		}
		
	items.push_back(1);	//add 1 cell to vector
	
	switch {
		case 1: 
			g_tab = g_tab + 2.99;
			g_items = g_items + 1;
			items [g_items] = 'Bread';
			break;
		case 2: 
			g_tab = g_tab + 3.99;
			g_items = g_items + 1;
			items [g_items] = 'Pie';
			break;
		case 3: 
			g_tab = g_tab + 3.99;
			g_items = g_items + 1;
			items [g_items] = 'Cake';
			break;
		case 4: 
			g_tab = g_tab + 0.99;
			g_items = g_items + 1;
			items [g_items] = 'Doughnut';
			break;
		case 5: 
			g_tab = g_tab + 1.99;
			g_items = g_items + 1;
			items [g_items] = 'Cake Pop';
			break;
		}
	
	return 0;
}

int fruit () {
	cout << "CURRENT TAB: " << g_tab << " items-" << g_items << endl;
	cout << "Please select an option:" << endl;
	cout << "1. Apple \t $2.99" << endl;
	cout << "2. Banana \t $2.99" << endl;
	cout << "3. Orange \t $2.99" << endl;
	cout << "4. Mango \t $3.99" << endl;
	cout << "5. Kiwi \t $3.99" << endl;
	cout << "6. Exit" << endl;
	int menuOption = 0;
	cin >> menuOption;
	if ((menuOption < 1)||(menuOption > 6))
		{
		cout << "That is not a valid option";
		menuOption = 6;
		}
		
	items.push_back(1);	//add 1 cell to vector
	
	switch {
		case 1: 
			g_tab = g_tab + 2.99;
			g_items = g_items + 1;
			items [g_items] = 'Apple';
			break;
		case 2: 
			g_tab = g_tab + 2.99;
			g_items = g_items + 1;
			items [g_items] = 'Banana';
			break;
		case 3: 
			g_tab = g_tab + 2.99;
			g_items = g_items + 1;
			items [g_items] = 'Orange';
			break;
		case 4: 
			g_tab = g_tab + 3.99;
			g_items = g_items + 1;
			items [g_items] = 'Mango';
			break;
		case 5: 
			g_tab = g_tab + 3.99;
			g_items = g_items + 1;
			items [g_items] = 'Kiwi';
			break;
		}
		
	return 0;
}

int candy () {
	cout << "CURRENT TAB: " << g_tab << " items-" << g_items << endl;
	cout << "Please select an option:" << endl;
	cout << "1. Snickers \t $4.99" << endl;
	cout << "2. Hot Tamales \t $4.99" << endl;
	cout << "3. Starburst \t $4.99" << endl;
	cout << "4. Skittles \t $4.99" << endl;
	cout << "5. Laffy Taffy (sour apple) \t $0.09" << endl;
	cout << "6. Exit" << endl;
	int menuOption = 0;
	cin >> menuOption;
	if ((menuOption < 1)||(menuOption > 6))
		{
		cout << "That is not a valid option";
		menuOption = 6;
		}
		
	items.push_back(1);	//add 1 cell to vector
	
	switch {
		case 1: 
			g_tab = g_tab + 4.99;
			g_items = g_items + 1;
			items [g_items] = 'Snickers';
			break;
		case 2: 
			g_tab = g_tab + 4.99;
			g_items = g_items + 1;
			items [g_items] = 'Hot Tamales';
			break;
		case 3: 
			g_tab = g_tab + 4.99;
			g_items = g_items + 1;
			items [g_items] = 'Starburst';
			break;
		case 4: 
			g_tab = g_tab + 4.99;
			g_items = g_items + 1;
			items [g_items] = 'Skittles';
			break;
		case 5: 
			g_tab = g_tab + 0.09;
			g_items = g_items + 1;
			items [g_items] = 'Laffy Taffy';
			break;
		}
	
	return 0;
}

int printReceipt (){
	system('CLS');

	items.push_back(1);	//add 1 cell to vector
	items [(g_items +1)] = '********';
	
	cout << "You ordered " << " " << g_items << " " << "items for a total of " << " " << g_tab << " ."<<endl;
	for (int i = 1, i++, items [i] == '********')
		{
			cout << items [i] << endl;
		}
	cout << "Your total item cost is " << " " << g_tab << " ." << endl;
	double tax = (g_tab * 0.08);
	double total = (tax + g_tab);
	cout << "Tax " << " " << tax << endl;
	cout << "Grand Total" << " " << total << endl;
}

int main () {
	
	do {
		
		int menuChoice = menu ();
	
		switch (menuChoice){
			case 1:
				beverages ();
				break;
			case 2:
				baked ();
				break;
			case 3:
				fruit ();
				break;
			case 4:
				candy ();
				break;
			case 5:
				break;
			}
	
	} while (menuChoice != 5)
		
	printReceipt ();

	system("PAUSE");	
	
return 0;
}
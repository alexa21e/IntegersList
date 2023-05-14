#include <iostream>
#include "List.h"
#include "Node.h"
using namespace std;
int main()
{
	List list;
	Node node, *head = NULL;
	int noMenu = 0, n;
	do {
		cout << "Menu:" << endl;
		cout << "To add new number to the list, press 1" << endl;
		cout << "To delete number from the list, press 2" << endl;
		cout << "To delete numbers which are less than a given n value, press 3" << endl;
		cout << "To calculate the arithmetic mean of the list, press 4" << endl;
		cout << "To print the list, press 5" << endl;
		cout << "To exit the menu, press 6" << endl;
		cin >> noMenu;
		switch (noMenu) {
			case 1:
			cout << "Type value to add: ";
			cin >> n;
			list.addNode(node, n);
			cout << endl;
			break;
		case 2:
			cout << "Type value you want to delete:";
			cin >> n;
			list.deleteNodeAtPosN(list, n);
			cout << endl;
			break;
		case 3:
			cout << "Type the value n:";
			cin >> n;
			list.deleteNodesLess(list, n);
			cout << endl;
			break;
		case 4:
			cout << "The value of the arithmetic mean is:";
			list.calcMean(list);
			cout << endl;
			break;
		case 5:
			cout << "The elements of the list are: ";
			list.printNode(list);
			cout << endl;
			break;
		case 6:
			return 0;
		}
	} while (noMenu!=6);
}
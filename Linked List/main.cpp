#include <iostream>
#include <LinkedListIterator.h>
#include <NodeType.h>
#include <LinkListType.h>
using namespace std;

int main()
{
	int outPut = 0;
	int value = 0;
	LinkListType<int> *list = new LinkListType<int>();
	while(outPut != 4)
	{
		if (outPut > 4) {
			cout << "Invalid Choice :(" << endl;
			system("pause");
			continue;
		}
		cout << "1.Insert , 2.Delete, 3.Display, 4.Exit" << endl;
		cout << endl;
		cout << " Enter a choice \n";
		cin >> outPut;
		cout << " Enter node of your choice" << endl;
		cin >> value;
		cout << endl;
		system("cls");
		switch(outPut)
		{
		case 1:
			list->InsertFirst(value);
			cout << endl;
			cout << value << " has been inserted into the list\n";
			cout << endl;
			break;
		case 2:
			list->DeleteNode(value);
			break;
		case 3:
			list->Print();
			cout << endl;
			break;
		case 4:
			return 0;
			break;
		default:
			cout << "Invalid" << endl;
		}
	}

	system("pause");
}
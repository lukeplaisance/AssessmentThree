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
		cout << "Press 1, 2, 3, or 4 to choose what you want to do" << endl;
		cout << endl;
		if (outPut > 4) {
			cout << "Invalid Choice :(" << endl;
			system("pause");
			continue;
		}
		cout << "1.Insert Node || 2.Delete Node || 3.Display List || 4.Exit" << endl;
		cout << endl;
		cout << " Choose one of the four choices \n";
		cin >> outPut;
		cout << " Enter any number for the node" << endl;
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
		default:
			cout << "Invalid" << endl;
		}
	}

	system("pause");
}
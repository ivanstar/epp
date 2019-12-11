#include <iostream>
#include "linkedlist.h"

using namespace std;

void menu()
{
  cout << endl;
  cout << "==========MENU==============" << endl;
  cout << "p - print linked list" << endl;
  cout << "a - add front of linked list" << endl;
  cout << "d - delete front linked list" << endl;
  cout << "f - find value in linked list" << endl;
  cout << "q - quit the program" << endl;
  cout << endl;
}

//print function
void print(NodeType * head)
{
  NodeType *tempPtr;
  tempPtr = head;
  while(tempPtr != NULL )
  {
    cout << tempPtr->info << " ";
    tempPtr = tempPtr->nextPtr;
  }
  cout << endl;
}

//add front function
NodeType* addFront(NodeType *head, int value)
{
  NodeType *tempPtr = new NodeType();
  tempPtr->info = value;
  tempPtr->nextPtr = head;
  return (tempPtr);

}

NodeType* deleteFront (NodeType* head)
{
  if (head == NULL)
  {
    return 0;
  }
  NodeType *store;
  store = head->nextPtr;
  delete head;
  return store;

}


void find(NodeType* head, int value)
{
  NodeType *tempPtr;
  tempPtr = head;
  bool flag;
  //traverse the linkedlist
  cout << endl;
  while(tempPtr != NULL)
  {
    if(value == tempPtr->info)
    {
      flag = true;
      break;
    }
    else
    {
      flag = false;
    }
    tempPtr = tempPtr->nextPtr;
  }

  if(flag == true)
  {
    cout << "Found";
  }
  else
  {
    cout << "Not found";
  }

}
int getMinimum(int *array, int length) {

	if(length == 1)
	{
		return 0;
	}

	if(array[length-1] < getMinimum(array,length-1))
	{
		return array[length-1];
	}
	else
	{
		return getMinimum(array,length-1);
	}

}


int main()
{
  NodeType * head = NULL;
  NodeType * currentPtr;
  int value;
  char input;

  do
  {
    menu();
    cout << "Please select an option: ";
    cin >> input;

    switch (input)
    {
      //print
      case 'p':
      case 'P':
        cout << "\nContents of linked list: ";
        print(head);
        break;

      //add front
      case 'a':
      case 'A':
        cout << "Value to insert: ";
        cin >> value;
        head = addFront(head,value);
        break;

      case 'd':
      case 'D':
        head = deleteFront(head);
        break;

        case 'f':
        case 'F':
          cout << "Enter a value to find: ";
          cin >> value;
          find(head,value);
          break;



    }




  } while(input != 'q');




  return 0;
}

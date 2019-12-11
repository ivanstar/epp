#include <iostream>
#include <string>

using namespace std;

// Implement printArray here
void printArray(int myarray[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << myarray[i] << " ";
	}

	cout << endl;
}


// Implement getElement here
int getElement(int myarray[], int n)
{
	int isPal = 0;
	int j = n;
	for (int i = 0; i < n/2; i++) {

		if (myarray[i] != myarray[j]) {
			isPal = 1;
		}
		j--;

	}


	//int smallest = 0;
	//int i; // counter

	//// find first positive number
	//for (i = 0; i < n; i++) {

	//	if (myarray[i] > 0) {

	//		smallest = myarray[i];
	//		break;
	//	}
	//}

	//// now look for the smallest positive number
	//for (/*nothing*/ ; i < n; i++){

	//	if (myarray[i] > 0 && myarray[i] < smallest){

	//	
	//		smallest = myarray[i];
	//	}
	//}
	//return smallest;
	//
}


// DO NOT CHANGE MAIN FUNCTION BELOW
int main() {
	int myarray[100];
	cout << "Enter number of integers : ";
	int n;
	cin >> n;
	cout << " Enter " << n << " integers: " << endl;
	for (int i = 0; i < n; i++)
		cin >> myarray[i];
	cout << "Contents of array : ";
	printArray(myarray, n);
	cout << "Output of getElement: " << getElement(myarray, n) << endl;
	system("pause"); // comment/uncomment if needed

}

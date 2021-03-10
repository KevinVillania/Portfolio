// C++ Program to Insert an element
// at a specific position in an Array

#include <iostream>
using namespace std;

// Function to insert x in arr at position pos
int* insertX(int n, int arr[],int x, int pos)
{
	// increase the size by 1
	n++;

	// shift elements forward
	for (int i = n; i >= pos; i--)
		arr[i] = arr[i - 1];

	// insert x at pos
	arr[pos - 1] = x;

	return arr;
}

// Driver Code
int main()
{
	int arr[100] = {};
	int x, pos, n = 10;

	// initial array of size 10
	for (int i = 0; i < 10; i++)
		arr[i] = i + 1;

	// print the original array
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	// element to be inserted
	cout << "Enter value to be inserted: ";
	cin >> x;

	// position at which element is to be inserted
	cout << "Enter position: ";
	cin >> pos;

	// Insert x at pos
	insertX(n, arr, x, pos);

	// print the updated array
	for (int i = 0; i < n + 1; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}

#include <iostream>
using namespace std;

int arr[20];				// array of integers to hold values	
int cmp_count = 0;			// number of comparasion
int mov_count = 0;			// number of data movements
int n;

void input() {
	while (true)
	{
		cout << "masukan panjang elemant array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20 " << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];

	}
}

// swaps the element st index x with the element at index y
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)				// langkah Algoritma no 1
		return;

	// partition the list into two parts;
	// one containing elements less that or equal to pivot
	// outher containing elements greather than pivot

	pivot = arr[low];			// Langkah algoritma no 2

	i = low + 1;				// langkah algoritma no 3
	j = high;					// langlah algoritma no 4


	while (i <= j)				// langkah algoritma no 10
	{
		// search for an element greather  than pivot 
		while ((arr[i] <= pivot) && (i <= high))			// langkah algoritma no 5
		{
			i++;											// langkah algoritma no 6
			cmp_count++;
		}
	}
	cmp_count++; 

	//search for an element less than or equal to pivot 
	while ((arr[i] > pivot)&& (j >=low))					// langlah algoritma no 7
}
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
}

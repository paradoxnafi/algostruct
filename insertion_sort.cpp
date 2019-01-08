#include <iostream>
using namespace std;

void insertion_sort(int A[], int n) {
	int i, j, item;

	for(i = 1; i < n; i++) {
		// Assign A[i] to item
		item = A[i];

		// Now we need to find appropriate place for item
		j = i-1;
		while(j >= 0 && A[j] > item) {
			// Move A[j] to (j-1)
			A[j+1] = A[j];
			j = j-1;
		}
		// A[j+1] is appropiate place for item
		// We have already cleared place for it
		A[j+1] = item;
	}
}

int main()
{
	int data[] = {12, 44, 22, 45, 75, 54, 93, 1, 9, 0, 3, 5};
	int n = sizeof(data)/sizeof(data[0]);
	
	insertion_sort(data, n);

	for(int i = 0; i < n; i++) {
		cout << data[i] << " ";
	}
	cout << endl;

	return 0;
}
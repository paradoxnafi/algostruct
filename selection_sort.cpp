// Selection sort

#include <iostream>
using namespace std;

void selection_sort(int data[], int n) {
	int index_min;

	for(int i = 0; i < n-1; i++) {
		index_min = i;
		for(int j = i+1; j < n; j++) {
			if(data[j] < data[index_min]) {
				index_min = j;
			}

			if(index_min != i) {
				swap(data[i], data[index_min]);
			}		
		}
	}

	cout << "{";
	for(int i = 0; i < n; i++) {
		cout << data[i];
		if(i != n-1) {
			cout  << ", ";
		} else {
			cout << "}\n";
		}
	}
}

int main()
{
	int data[] = {2, 9, 0, 67, 34, 22, 12, 87, 33, 45, 55, 23, 53, 90, 99, 34, 33};
	int n = sizeof(data)/sizeof(data[0]);

	cout << "Before sort\n{";
	for(int i = 0; i < n; i++) {
		cout << data[i];
		if(i != n-1) {
			cout  << ", ";
		} else {
			cout << "}" << endl;
		}
	}

	cout << "\nAfter sort\n";

	selection_sort(data, n);

	return 0;
}
#include <iostream>
using namespace std;

int BinSearch(int*, int, int);

int main()
{
	int ageList[] = {10, 12, 14, 16, 18, 20, 21};
	int n = sizeof(ageList)/sizeof(ageList[0]);

	cout << BinSearch(ageList, n, 20) << endl;
}

int BinSearch(int data[], int n, int x) {
	int L = 0, R = n-1;

	while(L <= R) {
		int mid = (L+R)/2;
		if(data[mid] == x) {
			return mid;
		}

		if(data[mid] < x) {
			L = mid+1;
		} else{
			R = mid-1;
		}

//		cout << mid << endl;
	}

	return -1;
}

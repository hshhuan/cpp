/**
  All kind of sort algorithm in ascending order
  
eg.
10
222 32 525 73 5 235 86 93 30 83

*/

#include <iostream>

#define MAX 100

using namespace std;

int n = 0;
int a[MAX] = {0};


void input() {
	cin >> n;
	for (int i =0; i< n; i++)
		cin >> a[i];
}

void print() {
	for (int i = 0; i< n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void swap(int *a, int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void select_sort(int *a, int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++ ) {
			if (a[i] > a[j]) {
				swap(a, i, j);
			}
		}
	}
}

void bubble_sort(int* a, int b) {
	for(int i = 1; i < n ; i++) {
		for (int j = 0; j < n - i; j++) {
			if (a[j] > a[j + 1])
				swap(a, j, j + 1);
		}
	}
}

int main() {
	
	input();
	
	//select_sort(a, n);
	bubble_sort(a, n);
	
	print();
	
	return 0;
}


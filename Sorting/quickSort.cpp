#include <bits/stdc++.h>

using namespace std;

void quicksort(int * a, int left, int right){

	if(left < right){
		int i = left, j = right + 1, pivot = a[left];
		do{
			do i++; while(a[i] < pivot);
			do j--; while(a[j] > pivot);

			if(i < j)
				swap(a[i], a[j]);
		}while(i < j);

		swap(a[left], a[j]);

		quicksort(a, left, j - 1);
		quicksort(a, j + 1, right);
	}
}

int main(){

	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	int n;
	cin >> n;

	int a[n + 10];

	for (int i = 1; i <= n; i ++){
		cin >> a[i];
	} 

	quicksort(a, 0, n - 1);

	for(int i = 1; i < n; i ++){
		cout << a[i] << " ";
	}
}
#include <bits/stdc++.h>

using namespace std;

void insertSort(int in_el, int * a, int i){

	a[0] = in_el;

	while(in_el < a[i]){
		a[i + 1] = a[i];
		i --;
	}

	a[i + 1] = in_el;
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int n;
	cin >> n;

	int a[n + 10];

	for (int i = 1; i <= n; i ++){
		cin >> a[i];
	} 

	for(int i = 2; i <= n; i ++){
		int temp = a[i];
		insertSort(temp, a, i - 1);
	}

	for(int i = 1; i < n; i ++){
		cout << a[i] << " ";
	}
}
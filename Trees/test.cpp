#include<bits/stdc++.h>
using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin >> n;
	
	int a[n + 10];
	int mn = INT_MAX, id;

	for(int i = 0; i < n; i ++){
		cin >> a[i];
		if(a[i] < mn){
			id = i;
			mn = a[i];
		}
	}	

	int k = 0;
	while(1){
	bool f = false;
	//cout << a[id] << "  " << k << endl;
	for(int i = 0; i < n; i ++){
		if(k*abs(i - id) <= min(a[i], a[id]))
			f = false;
		else{
			f = true;
			break;
		}
	}

	if(f){
		break;
	}
	else 
		k ++;
	if(k > 100)
		break;
   }

   cout << --k << endl;
}
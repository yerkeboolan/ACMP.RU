#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	int a[n];
	
	int maxi, mini;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}	
	
	mini = a[0];
	
	for(int i = 0; i < n; i++) {
		
		if(a[0] > a[i]) 
		mini = a[i];
	}
	
	
	int m;
	for(int i = 0; i < n; i++) {
		
		if(a[0] < a[i]) 
		m = a[i];
	}	
	cout << mini<<" "<<m;
	
	return 0;	
}

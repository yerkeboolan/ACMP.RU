#include <iostream>


	using namespace std;

	int main() {

	int n,c = 0, d = 0;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}

	for(int i = 0; i < n; i++) {
		if(a[i]>0)
		c++;
		if(c > d)
		d = c;
		if(a[i]<=0)
		c=0;
		}
		cout<< d;
    
return 0;
}
#include <iostream>
	
	using namespace std;

	int main() {
		
		int x, y, h = 437;
		int c = 0;

		cin >> x;
		int a[x];
		
		for(int i = 1; i <= x; i++) {
			cin >> y;
			a[i] = y;
		if(a[i] <= h)  {
			c++;
			cout <<"Crash "<<i;
			break;
		}
	}



	if(c == 0) cout <<"No crash";

	return 0;

}

	


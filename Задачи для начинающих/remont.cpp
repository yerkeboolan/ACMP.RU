#include <iostream>
	
	using namespace std;

	int main() {
		
		int l,w,h;
		cin >> l >> w >> h;

		
		int amount;
		if((2*h*(l + w)) % 16 != 0) {
			amount = (2*h*(l + w)/16) + 1;
			cout << amount; }
	   	else {
	   		amount = 2*h*(l + w)/16;
	   		cout << amount;
	    }


	return 0;
	}

	                     
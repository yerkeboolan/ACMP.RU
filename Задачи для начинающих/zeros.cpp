#include <iostream>
#include <string>

	using namespace std;

	int main() {
		
		int c = 0;
		int amount = 0;

		string zeros;
		cin >> zeros;
		for(int i = 0; i < zeros.size(); i++) {
			if(zeros[i] == '0') {
				c++;
				if(c > amount) amount = c;
			}

		 else	c = 0; 

	}


	cout << amount;

	return 0;
	}


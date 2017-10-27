#include <iostream>
#include <string>

	using namespace std;

	int main() {
		
		int a[3];
		a[0] = 1;
		a[1] = 0;
		a[2] == 0;

		string s;
		cin >> s;

		for(int i = 0; i < s.size(); i++) {
			if(s[i] == 'A') {
			int temp;
			temp = a[0];
			a[0] = a[1];
			a[1] = temp;
			}

			if(s[i] == 'B') {
			int temp;
			temp = a[2];
			a[2] = a[1];
			a[1] = temp;
			}

			if(s[i] == 'C') {
			int temp;
			temp = a[0];
			a[0] = a[2];
			a[2] = temp;
			}
	   }


	   for(int i = 0; i < 3; i++) {
	   	if(a[i] == 1) {
	   		cout << i+1;
	   }

	   }

	   return 0;
	   }



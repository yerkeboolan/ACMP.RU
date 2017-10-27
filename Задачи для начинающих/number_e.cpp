#include <iostream>

	using namespace std;

	int main() {
		int n, newm;
		string s = "2.7182818284590452353602875";
		cin >> n;

		if(n == 0) {
			cout << 3;
			return 0;
       	}

       	for(int i = 0; i <= n + 1; i++) {
       		if(i == n + 1 && s[n + 2] - 48 >= 5) {
       		newm = s[n + 1] - 47;
       		cout << newm;
       		}

       		else cout << s[i];

       }

   return 0;
   }

	

       	



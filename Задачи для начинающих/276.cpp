#include <iostream>
	
	using namespace std;

	int main() {
		
		int n, m, a[10000];
		cin >> n >> m;
		int res;
		int d = n & m;

		if(n % m == 0) {
				res =  n / m;
			}

		else {
			res = (n - n & m)/m;
		}


		for(int i = m - 1; i >= 0; i--) {
			if(d > 0) {
			a[i] = res + 1;
			d--;
			}

			else {	
				a[i] = res;
			}

	   }


	   for(int i = 0; i < m; i++) {	
	   		cout << a[i] <<" ";
	   }


	   return 0;
	   }



			
		 	
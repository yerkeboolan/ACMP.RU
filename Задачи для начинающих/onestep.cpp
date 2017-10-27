#include <iostream>
#include <string>

	using namespace std;

	bool 


	int main() {
		
		int n; 
		cin >> n;

		int x[n];
		
		for(int i = 0; i < n; i++) {
			cin >> x[i];
		}

		for(int i = 0; i < n; i++) {
			if(luckynumber(x[i] + 1) || luckynumber(x[i] - 1)) cout <<"YES";
			else cout << "NO";
			cout << endl;
	   }
        

		return 0;
		

		}
  

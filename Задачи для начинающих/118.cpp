#include <iostream>

	using namespace std;

	int main() {
		
		int n, k;
		cin >> n >> k;
		int a[n];
		int b[n];
		

		for(int i = 0; i < n; i++) {
			b[i] = i + 1;
		}

		int c = 1;	
		int i = k;
		int cnt = k;
		a[k] = 1;
	    while(n-c>1) {  
	    	if(cnt == 0 && a[i] == 0) {
	    		a[i] = 1;
	    		c++;
	    		cnt = k;
	    	}
	    	else if(a[i] == 0) {
	    	cnt--;
	    	}
	    	i++;

	    	if(i == n)   {
	    		i = 0;
	    	}
                         

            cout<<c;
	    }


		return 0;
		}

		
	    	

	    	
	    	
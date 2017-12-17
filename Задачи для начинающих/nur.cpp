#include <iostream>

	using namespace std;


	int m, n;

	int main() {    
  	cin >> n >>m;
	bool a[n];
	int t = n;
	int j = -1, k = 0; 
	for(int i = 0 ; i < n ; i++){
		a[i] = true;
	}
	while(t > 1){
		j++;
		if(j > n - 1){
          j = 0;
		}
      if(a[j])k++;
	        if( k == m){
              a[j] = false;
			k = 0;
			--t;
		}
	}
  for(int  i = 0 ; i < n;i++){
		if(a[i]) cout << i + 1;
	}
	return 0;
}
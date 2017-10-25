#include <iostream> 
		
		using namespace std; 
	int main()  { 
		
		int a,a1,a2,a3,a4,b,b1,b2,b3,b4; 
		cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4; 
		
		a = a1 + a2 + a3 + a4; 
		b = b1 + b2+ b3 + b4; 


		if (a>b) cout<< 1; 
		if (a<b) cout<< 2; 
		if(a==b) cout <<"DRAW";
		
 
return 0; 
} 
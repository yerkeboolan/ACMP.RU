#include<iostream> 
	using namespace std; 
	int main ()  { 	

	int x, y; 
	cin >> x; 
    y = 1;

    
    if (x == 1)  
		cout<<"YES"; 
	else { 
		while (y < x) 
		y = y * 2; 
        
        if (y == x) 
			cout<<"YES"; 
		else 
			cout<<"NO"; 
		} 
	return 0; 
}
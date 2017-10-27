#include <iostream> 

	using namespace std;
	 
	
	int main() { 
	
	char cclock; 
	int a, b; 
	cin >> a >> cclock >> b; 
	int c, d; 
	cin >> c >> d; 

	
	b += d; 
	if (b >= 60) { 
	int t = b / 60; 
	b %= 60; 
	a += t; 
	} 
	
	a += c; 
	if (a >= 24) a %= 24; 
	if (a < 10)	cout << 0; 
	cout << a << ':'; 
	if (b < 10) cout << 0; 
	cout << b; 


	return 0; 
}



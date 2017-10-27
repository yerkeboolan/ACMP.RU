#include <iostream>


	using namespace std;

	int main() {
		
	int a,b,c; 
	int d,e,f; 
	cin >> a >> b >> c; 
	cin >> d >> e >> f; 

	if (a > b) 
	swap(a, b); 
	if (b > c) 
	swap(b, c); 
	if (a > b) 
	swap(b, a); 


	if (d > e) 
	swap(d, e); 
	if (e > f) 
	swap(e, f); 
	if (d > e) 
	swap(e, d); 

		if (a * b * c == d * e * f) { 
			cout << "Boxes are equal"; 
		}
		else if (a >= d && b >= e && c >= f) { 
			cout << "The first box is larger than the second one"; 
		}
 		else if (d >= a && e >= b && f >= c) { 
			cout << "The first box is smaller than the second one"; 
		}
 		else { 			
		cout << "Boxes are incomparable"; 
		} 
		return 0;
		}


		
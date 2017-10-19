#include <iostream>

	using namespace std;

	int main() {
		
		int a, b, c;
		cin >> a >> b >> c;
		
		int d = a*b;

		if(d == c)
			cout << "YES";
		else
			cout <<"NO";

		return 0;
	}	
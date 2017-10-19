#include <iostream>
	using namespace std;

	int main() {
		
		int a, b, c;
		cin >>a >> b>> c;

		if((a > b && a > c) && (b > c || c > b)) {
			cout << "YES";
		}
		if((a < b && a < c) && a == b && a == c)) {
			cout << "NO";
		}
	return 0;
	}	
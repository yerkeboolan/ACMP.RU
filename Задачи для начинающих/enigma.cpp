#include <iostream>

	using namespace std;

	int main() {
		
		int x, y;
		cin >> x >> y;

		for(int i = 0; i < x; i++) {
			if((x - i)*i == y) {
				cout << i <<" "<<x - i;
			break;
			}
		}
	
	
		
	return 0;
}

	
#include <iostream>
	using namespace std;

	int main() {
		
		int x, y, z;
		cin >> x >> y >> z;

		if(x + y <= z) cout << "NO";
		else if(x + z <= y) cout <<"NO";
		else if(y + z <= x) cout <<"NO";
		else cout <<"YES";


		return 0;
		}


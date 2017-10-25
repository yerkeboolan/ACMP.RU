#include <iostream>
#include <string>
	using namespace std;

	int main() {	
		int day;
		cin >> day;

		if(day % 3 == 0) cout << "GCV";
		else if(day % 3 == 1) cout << "VGC";
		else if(day % 3 == 2) cout << "CVG";

		return 0;

	}	
		
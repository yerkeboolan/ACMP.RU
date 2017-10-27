#include <iostream>
#include <cmath>

	using namespace std;

	int main() {
		
		double x, y, r1, x1, y1, r2;
		cin >> x >> y >> r1 >> x1>> y1 >> r2;

		double dis = sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));
		if(r1 + r2 >= dis && dis + r1 >= r2 && dis + r2 >= r1) 	cout <<"YES";
		else  cout <<"NO";

		return 0;
		}

		
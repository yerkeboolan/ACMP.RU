#include <iostream>
#include <algorithm>

	using namespace std;

	int main() {
		
		int a,b,c,d,e,f, p1, p2, dif, res;

		cin >> a >> b >> c >> d >> e >> f;

		p1 = a * b / 100;
		p2 = d * e / 100;

		dif = min(a - p1, d - p2);
		res = (a-dif)*c + (d - dif)*f;

		cout << res;

		return 0;
		}



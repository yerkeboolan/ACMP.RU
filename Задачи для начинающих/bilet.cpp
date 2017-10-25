#include <iostream>
#include <string>

	using namespace std;

	int main() {
		
		string s;
		cin >> s;

		bool b = (s[0] + s[1] + s[2] == s[3] + s[4] + s[5]);

		if(b) cout <<"YES";

		else cout <<"NO";

		return 0;
		

		}


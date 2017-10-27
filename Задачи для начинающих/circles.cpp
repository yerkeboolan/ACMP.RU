#include <iostream>
#include <string>

	using namespace std;

	int main() {
		
		string s;
		cin >> s;
		int cnt = 0;
		
		for(int i = 0; i < s.size(); i++) {
		if(s[i] == '0') { cnt++; }
		if(s[i] == '6') { cnt++; }
		if(s[i] == '8') { cnt += 2; }
		if(s[i] == '9') { cnt++; }
		}

		cout << cnt;

		
return 0;
}


	
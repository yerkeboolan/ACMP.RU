#include <iostream>

	using namespace std;

	int main() {
		int n, ages, genders, got = 0, d, ans;
		cin >> n;
		int age[n], gender[n];
		for(int i = 1; i <= n; i++) {
			cin >> ages >> genders;
			if(genders == 1) {
				got++;
			d = ages;
			ans = i;
			}

			age[i]  = ages;
			gender[i] = genders;
			}

		if(got == 0) {
			cout << "-1";
			return 0;
		}

		for(int i = n; i >= 1; i--) {
			if(age[i] >= d && gender[i] == 1) {
			d = age[i];
			ans = i;
			}
		}

		cout << ans;


		return 0;
		}

		
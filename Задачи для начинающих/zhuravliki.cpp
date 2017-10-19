#include <iostream>
	using namespace std;

	int main() {

		int n;
		cin >> n;

		int a[3];

		for(int i = 0; i < 3; i++) {
			if(i % 2 == 0)   {
				a[i] = (n / 6);

			}
			else       {
				a[i] = n - ((n / 6) * 2);
			}

			cout <<a[i]<<" ";
			
	   }

		return 0;
}
	
#include <iostream>
	
	using namespace std;

	int main() {
		
		int a, sum = 0;
		cin >> a;

		int age[a][2];
		for(int i = 0; i < a; i++) {
			for(int j = 0; j < 2; j++) {
				cin >> age[i][j];
				sum++;
			}
		}


		

		for(int i = 0; i < a; i++) {
			for(int j = 0; j < 2; j++) {
				
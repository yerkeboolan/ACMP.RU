#include <iostream>

	using namespace std;

	

long Nod(long a, long b)
{
    while (a && b)
        if (a >= b)
           a %= b;
        else
           b %= a;
    return a | b;
}

	int main() {

	int a, b;

	cin >> a >> b;

	cout << Nod(a, b);

	return 0;

}

	
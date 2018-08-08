#include <iostream>
using namespace std;

int i1, t, m;
int q, d, n, p;

int main(){
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> m;
		q = m / 25; m %= 25;
		d = m / 10; m %= 10;
		n = m / 5; m %= 5;
		p = m / 1;
		cout << q << " " << d << " " << n << " " << p << endl;
	}
	return 0;
}
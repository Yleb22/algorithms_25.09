#include <iostream>
using namespace std;

float sum(int k, ...);
float arefm(int k, ...);

int main() {
	cout << "\n4+6=" << sum(2, 4, 6);
	cout << "\n1+2+3+4=" << sum(4, 1, 2, 3, 4);
	cout << "\n4+6=" << arefm(2, 4, 6);
	cout << "\n1+2+3+4=" << arefm(4, 1, 2, 3, 4) << endl;
	system("pause");
	return 0;
}

float sum(int k, ...) {
	int *p = &k;
	float s = 0;
	for (; k != 0; k--)
		s += *(++p);
	return s;
}

float arefm(int k, ...) {
	int *p = &k;
	float s = k;
	int i;
	for (i = 1; (*p) != 0; i++)
		s += *(++p);
	return s / (i - 1);
}

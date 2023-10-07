#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double P;
	int k, N;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	P = 1;
    k = 1;
    while (k <= 25 && N <= 25) {
        P *= sqrt(1 + N / k);
        k++;
    }
    cout << "P (while) = " << P << endl;
    P = 1;
    k = 1;
    do {
        P *= sqrt(1 + N / k);
        k++;
    } while (k <= 25 && N <= 25);
    cout << "P (do-while) = " << P << endl;
    P = 1;
    k = 1;
    for (k = 1; k <= 25 && N <= 25; k ++) {
        P *= sqrt(1 + N / k);
    }
    cout << "P (for++) = " << P << endl;
    P = 1;
    k = 1;
    for (k = 25; k >= 1 && N <= 25; k--) {
        P *= sqrt(1 + N / k);
    }
    cout << "P (for--) = " << P << endl;
    return 0;
}






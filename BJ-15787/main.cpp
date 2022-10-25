#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <bitset>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long int T[1000000] = { 0 };
	int train, order;
	int cnt = 0;
	cin >> train >> order;
	while (order--) {
		int input, T_n, seat;
		cin >> input;
		if (input == 1) {
			cin >> T_n >> seat;
			T[T_n] = T[T_n] | (1 << (seat - 1));
		}
		else if (input == 2) {
			cin >> T_n >> seat;
			T[T_n] = T[T_n] ^ (1 << (seat - 1));
		}
		else if (input == 3) {
			cin >> T_n;
			T[T_n] *= 2;
			if ((T[T_n] & (1 << 20)) > 0) {
				T[T_n] = T[T_n] ^ (1 << 20);
			}
		}
		else if (input == 4) {
			cin >> T_n;
			T[T_n] /= 2;
		}
	}
	for (int i = 0; i < train; i++) {

	}
	/*int a = 0;
	a = a | (1 << 1);
	cout << bitset<8>(a) << endl;
	a /= 2;
	a = a | (1 << 2);
	cout << bitset<8>(a) << endl;
	a /= 2;
	cout << bitset<8>(a) << endl;*/
	return 0;
}
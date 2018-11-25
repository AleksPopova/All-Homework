/*
Напишите программу находящую первые n составных чисел.
*/

#include <iostream>
using namespace std;
int main() {
	int n, count;
	cin >> n;
	count = n;
	n += n + n + 1;
	bool *used = new bool[n + 1];
	used[0] = used[1] = 0;
	for (int i = 2; i <= n; i++) {
		used[i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		if (used[i] && i <= (int)sqrt(n)) {
			for (int j = i + i; j <= n; j += i) {
				used[j] = 0;
			}
		}
		if (!used[i]) {
			cout << i << " ";
			--count;
		}
		if (count == 0) {
			break;
		}
	}
	return 0;
}

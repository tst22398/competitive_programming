#include<bits/stdc++.h>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<int> left((int)1e5 + 1), right((int)1e5 + 1);
	int n, b;
	while (cin >> n >> b, n||b) {
		iota(left.begin(), left.end(), -1);
		iota(right.begin(), right.end(), 1);
		left[1] = right[n] = -1;
		for (int i = 0, l, r; i < b; i++) {
			cin >> l >> r;
			if (left[l] == -1)
				cout << "*";
			else cout << left[l];
			cout << ' ';
			if (right[r] == -1)
				cout << "*";
			else cout << right[r];
			cout << "\n";
			left[right[r]] = left[l];
			right[left[l]] = right[r];
		}
		cout << "-\n";
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, b;
	cin >> n >> b;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int j=0;
	for(int i=0; i<n; i++) {
		if(b>=a[i]) {
			j++;
			b -= a[i];
		}
	}
	cout << j << endl;
}

int main() {
	int t,i=0;
	cin >> t;
	while(t--) {
		cout << "Case #" << ++i << ": ";
		solve();
	}
	return 0;
}

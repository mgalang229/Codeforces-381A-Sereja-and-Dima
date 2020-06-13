#include <bits/stdc++.h>

using namespace std;

void decode() {
	int a[1000], n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int i = 0, j = n - 1;
	int d = 0, s = 0;
	bool ok = true;	
	while(i <= j) {
		if(a[i] >= a[j]) {
			if(ok) s += a[i];
			else d += a[i];
			i++;
		}
		else if(a[j] > a[i]) {
			if(ok) s += a[j];
			else d += a[j];
			j--;
		}
		if(ok) ok = false;
		else ok = true;
	}
	cout << s << " " << d << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}

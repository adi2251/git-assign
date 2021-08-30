#include <bits/stdc++.h>

using namespace std ;
using ll = long long ;
const int d4i[4] = { -1, 0, 1, 0}, d4j[4] = {0, 1, 0, -1};
const int d8i[8] = { -1, -1, 0, 1, 1, 1, 0, -1}, d8j[8] = {0, 1, 1, 1, 0, -1, -1, -1};
const ll mod = 1e9 + 7 ;

void solve () {
	int n ;
	cin >> n ;
	vector <int> v(n) ;
	for (int i = 0 ; i < n ; i ++) {
		cin >> v[i] ;
	}
	int min_val = INT_MAX ;
	int max_val = INT_MIN ;
	int min_ind = n , max_ind = 0 ;
	for (int i = 0 ; i < n ; i ++) {
		if (max_val < v[i]) {
			max_val = v[i] ;
			max_ind = i ;
		}
		if (min_val > v[i]) {
			min_val = v[i] ;
			min_ind = i ;
		}
	}
	if (min_ind > max_ind) {
		swap (min_ind , max_ind) ;
	}
	cout << min ({max_ind + 1, min_ind + 1 + n - max_ind, n - min_ind}) << endl ;
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt ;
	cin >> tt ;
	while (tt --) solve () ;
	return 0 ;
}
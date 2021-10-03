#include <bits/stdc++.h>

using namespace std;
using ll = long long ;
const int d4i[4] = { -1, 0, 1, 0}, d4j[4] = {0, 1, 0, -1};
const int d8i[8] = { -1, -1, 0, 1, 1, 1, 0, -1}, d8j[8] = {0, 1, 1, 1, 0, -1, -1, -1};
const ll mod = 1e9 + 7 ;

void dfs (vector <vector <char>> &v , int i , int j) {
	int n = v.size() , m = v[0].size() ;
	if (i >= 0 and i < n and j >= 0 and j < m and v[i][j] == '#') {
		v[i][j] = '.' ;
		for (int k = 0 ; k < 8 ; k ++) {
			dfs(v , i + d8i[k] , j + d8j[k]) ;
		}
	} else return ;
}

void solve () {
	int n , m ;
	cin >> n >> m ;
	vector <vector <char>> v
	                    (n , vector <char>(m)) ;
	for (int i = 0 ; i < n ; i ++) {
		for (int j = 0 ; j < m ; j ++) {
			cin >> v[i][j] ;
		}
	}
	int cnt = 0 ;
	for (int i = 0 ; i < n ; i ++) {
		for (int j = 0 ; j < m ; j ++) {
			if (v[i][j] == '#') {
				dfs(v , i , j) ;
				cnt ++ ;
			}
		}
	}
	cout << cnt << endl ;
}

int main () {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt ;
	cin >> tt ;
	while (tt --) solve () ;
	return 0 ;
}

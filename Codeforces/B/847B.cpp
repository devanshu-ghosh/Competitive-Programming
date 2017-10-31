#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6;

vector<int> v[maxn], memo;

main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int n, aux, idx;
	cin >> n;
	while(n--) {
		cin >> aux;
		if(memo.empty()) {
			v[0].push_back(aux);
			memo.push_back(aux);
		} else {

			idx = upper_bound(memo.begin(), memo.end(), aux, greater<int>()) - memo.begin();

			if(idx < memo.size() && aux >= memo[idx]) {
				memo[idx] = aux;
				v[idx].push_back(aux);
			} else {
				v[memo.size()].push_back(aux);
				memo.push_back(aux);
			}
		}
	}
	for(int i = 0; i < memo.size(); i++) {
		for(int j = 0; j < v[i].size(); j++) {
			if(j+1 == v[i].size()) {
				cout << v[i][j] << endl;
			} else {
				cout << v[i][j] << " ";
			}
		}
	}
}

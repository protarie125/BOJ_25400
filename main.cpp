#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <deque>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n;
deque<int> ls;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	ls = deque<int>(n);

	for (auto&& x : ls) {
		cin >> x;
	}

	auto ans = int{ 0 };
	auto v = int{ 1 };
	while (!ls.empty()) {
		if (v != ls.front()) {
			++ans;
		}
		else {
			++v;
		}

		ls.pop_front();
	}

	cout << ans;

	return 0;
}
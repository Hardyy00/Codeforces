#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// using namespace __gnu_pbds;
using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define all(a) (a).begin(), (a).end()
#define fauto(i,v) for(auto i : (v))
#define REPD(i,a,b) for(int i=a;i>=b;i--)
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// #define ordered_multiset tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>


typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<vector<long long>> vvll;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef pair<int, int> pii;
typedef pair<long long , long long> pll;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef map<long long, long long> mll;
typedef unordered_map<long long, long long> umll;
typedef set<long long> sll;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef unordered_set<long long> usll;
typedef stack<int> sti;
typedef stack<long long> stll;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<long long, long long>> vpll;
typedef priority_queue<int> pqi;
typedef priority_queue<pair<int, int>> pqpii;

const ll MOD = 1e9 + 7;

void print_map(mii &map) {

	cout << "{ ";
	fauto(i, map) {

		cout << "{ " << i.F << " : " << i.S << " }, ";
	}

	cout << " }" << endl;
}

void print_vector(vi &v) {

	cout << "{ ";

	fauto(i, v) cout << i << ", ";

	cout << " }" << endl;
}

void print_set(sll &s) {

	cout << "{ " ;

	fauto(i, s) cout << i << ", ";

	cout << " } " << endl;
}

class Node {

private:
	Node* links[2];
	bool end;
public:
	Node() {

		end = false;
	}

	bool containsKey(int bit) {
		return links[bit] != nullptr;
	}

	void put(int bit , Node* &node) {
		links[bit] = node;
	}

	Node* get(int bit) {
		return links[bit];
	}

	bool isEnd() {
		return end;
	}

	void setEnd() {
		end = true;
	}

};

class Trie {
	Node* root;

public:
	Trie() {
		root = new Node();
	}
	void insert(int num) {

		Node* curr = root;

		for (int i = 31; i >= 0; i--) {

			int bit = (num >> i) & 1;


			if (curr->containsKey(bit) == false) {

				Node* nn = new Node();
				curr->put(bit, nn);
			}

			curr = curr->get(bit);
		}

		curr->setEnd();
	}

	int maxXor(int num) {

		int ans = 0;

		Node* curr = root;

		for (int i = 31; i >= 0; i--) {

			int bit = (num >> i ) & 1;
			int oppositeBit = 1 - bit;

			if (curr->containsKey(oppositeBit)) {

				ans = ans | (1 << i);
				curr = curr->get(oppositeBit);
			} else {
				curr = curr->get(bit);
			}
		}

		return ans;
	}
};



void solve() {

	ll n;
	cin >> n;

	vl v(n);

	REP(i, 0, n - 1) {
		cin >> v[i];
	}

	int c1 = 1, c2 = 1;
	int p1 = 0, p2 = n - 1;

	REP(i, 1, n - 1) {
		if (v[i] == v[i - 1]) {
			c1++;
			p1 = i;
		} else {
			break;
		}
	}

	REPD(i, n - 2, 0) {

		if (v[i] == v[i + 1]) {

			c2++;
			p2 = i;
		} else {
			break;
		}
	}

	if (v[0] != v[n - 1]) {
		cout << n - max(c1, c2) << endl;

	} else {

		if (p2 <= p1) {
			cout << 0 << endl;
		} else {
			cout << n - (c1 + c2) << endl;
		}

	}

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout);
#endif

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while (t--) {

		solve();
	}



}
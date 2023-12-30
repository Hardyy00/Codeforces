#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;


#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define all(a) (a).begin(), (a).end()
#define fauto(i,v) for(auto i : (v))
#define REPD(i,a,b) for(int i=a;i>=b;i--)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


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

// int bs(sll &s, ll val) {

// 	ll low = 0;
// 	ll high = s.size() - 1;
// 	ll ans = -1;
// 	while (low <= high) {

// 		ll mid = (low + high) >> 1;

// 		int in = *(s.begin() + mid);
// 		if (in >= val) high = mid - 1;
// 		else {
// 			ans = mid;
// 			low = mid + 1;
// 		}
// 	}

// 	return ans + 1;


// }

struct Node
{
	int val, count;

	Node *left, *right;

	Node(int num1, int num2)
	{
		this->left = this->right = NULL;
		this->count = num2;
		this->val = num1;
	}
};

int addNode(Node *&root, int countSmaller, int value)
{

	if (root == NULL)
	{
		root = new Node(value, 0);
		return countSmaller;
	}
	if (root->val < value)
	{
		return root->count + addNode(root->right, countSmaller + 1, value);
	}
	else
	{
		root->count++;
		return addNode(root->left, countSmaller, value);
	}
}


void solve() {


	int n;
	cin >> n;

	vpll v(n);

	REP(i, 0, n - 1) {

		ll a, b;
		cin >> a >> b;

		v[i] = MP(a, b);
	}

	sort(all(v));

	ll sum = 0;

	ordered_set set;

	set.insert(v[n - 1].S);

	REPD(i, n - 2, 0) {

		sum += set.order_of_key(v[i].S);

		set.insert(v[i].S);
	}

	cout  << sum << endl;


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
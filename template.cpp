#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

void __print(int x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << x; }
void __print(const char *x) { cerr << x; }
void __print(const string &x) { cerr << x; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template<typename T, typename V>
void __print(const pair<T, V> &x) {
    cerr << '{';
    __print(x.first);
    cerr << ", ";
    __print(x.second);
    cerr << '}';
}

template<typename T>
void __print(const T &x) {
    int f = 0;
    cerr << '{';
    for (auto &i : x) {
        cerr << (f++ ? ", " : "");
        __print(i);
    }
    cerr << "}";
}

void _print() {
    cerr << "]\n";
}

template<typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) {
        cerr << ", ";
    }
    _print(v...);
}

#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define  dbg(x...)
#endif

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define sz(a) (int)a.size()
#define ff first
#define ss second
#define inf 1e18
#define pb push_back
#define eb emplace_back
#define vi vector<int>
#define mod 1000000007
#define pi pair<int, int>
#define ti tuple<int, int, int>
#define all(v) (v).begin(),(v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define set_bits(x) __builtin_popcountll(x)
#define deb(x) cout << "[" << #x << " = " << x << "]\n"
#define deb2(x, y) cout << "[" << #x << " = " << x << "  " << #y << " = " << y << "]\n"
#define output_vector(a) for(auto x : a) cout << x << " "
#define output_vector2(a) for(auto i : a) { for(auto j : i) cout << j << " "; cout << "\n"; }

//oset<int>s: s.find_by_order(k): Kth element in "s",s.order_of_key(k): Number of items strictly less than k
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


void solve() {

}

int32_t main() {

	fastio;

	int test_cases = 1;
	cin >> test_cases;

	while(test_cases--) {
	   solve();
	}
	
	cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " sec \n ";

	return 0;
}


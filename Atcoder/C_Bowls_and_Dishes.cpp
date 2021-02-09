// Created by ...
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define repe(i,a,b) for(int i=a; i<=b; i++)
#define ll long long
#define ui unsigned int
#define pb push_back
#define deb(x) cout << #x << '=' << x << endl
#define deb2(x,y) cout << #x << '=' << x << << #y << '=' << y << endl
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define read(x) cin >> x[i]
#define endl "\n"
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

#define hcf(x,y)     __gcd(x,y)
#define lcm(x,y)     (x*y)/(__gcd(x,y))
#define CountOne(x)  __builtin_popcount(x)        
#define parity(x)    __builtin_parity(x)           //Funtion return (true) if number of set bits is odd(odd parity) else false..
#define LeadZero(x)  __builtin_clz(x)             //Counts leading zero in binary representation of x ....   
#define TrailZero(x) __builtin_ctz(x)

#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
//alt + ctrl + N

//===============================================================================//
ll power(ll x, ll y) {
ll v = 1; while (y > 0) { if (y & 1)v = v * x; y = y >> 1; x = x * x;} return v;
}

bool isPowerOfTwo(ll x){
    return x && (!(x & (x-1)));     //check if the number is power of two or not
}
ll ceil(ll a,ll b){ return (a+b-1)/b; }
//===============================================================================//

ll ans = 0;

ll check(vector<pair<ll,ll>>&c,vector<ll>&a){
	ll maxi = 0;
	ll n = c.size();
	rep(i,0,n){
		if(a[c[i].ff] and a[c[i].ss]) maxi++;
	}
	return maxi;
}

void recur(ll i, vector<pair<ll,ll>>&b,vector<pair<ll,ll>>&c,vector<ll>&a){
	ll n = b.size();
	if(i >= n){
		ans = max(ans, check(c,a));
		return;
	}

	a[b[i].ff]++;
	recur(i+1,b,c,a);
	a[b[i].ff]--;
	a[b[i].ss]++;
	recur(i+1,b,c,a);
	a[b[i].ss]--;
	return;
}


int main(){
    fastIO;
srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ll test = 1;
    // cin >> test;
    while(test--){
        ll n,m,k;
        cin >> n >> m;
        vector<pair<ll,ll>> c(m);
        rep(i,0,m){
        	ll x,y;
        	cin >> x >> y;
        	c[i].ff = x;
        	c[i].ss = y;
        }
        cin >> k;
        vector<pair<ll,ll>> b(k);
        rep(i,0,k){
        	ll x,y;
        	cin >> x >> y;
        	b[i].ff = x;
        	b[i].ss = y;
        }
        vl a(n+1);
        recur(0,b,c,a);
        cout << ans << endl;
    }
return 0;
}
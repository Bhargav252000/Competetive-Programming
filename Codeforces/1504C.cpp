// Created by ...
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; i++)
#define rrep(i,a,b) for(int i=b-1;i>=0;i--)
#define repe(i,a,b) for(int i=a; i<=b; i++)
#define ll long long
#define ui unsigned int
#define pb push_back
#define deb(x) cout << #x << '=' << x << endl
#define deb2(x,y) cout << #x << '=' << x << #y << '=' << y << endl
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yup cout << "Yes" << endl
#define nope cout << "No" << endl
#define read(x) cin >> x[i]
#define endl "\n"
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795

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
const int M=1e9+7;
//===============================================================================//
ll power(ll x, ll y) {
ll v = 1; while (y > 0) { if (y & 1)v = v * x; y = y >> 1; x = x * x;} return v;
}

bool isPowerOfTwo(ll x){
    return x && (!(x & (x-1)));     //check if the number is power of two or not
}
ll ceil(ll a,ll b){ return (a+b-1)/b; }

vector<int>primes;
void createSieve(){
    bool prime[INF+1];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=INF;p++){
        if(prime[p]){
            for(int i=p*p;i<=INF;i+=p) prime[i] = false;
        }
    }
    for(int p=2;p<=INF;p++){
        if(prime[p]) primes.pb(p);
    }
}

long long mod(long long x){
    return ((x%M + M)%M);
}
long long add(long long a, long long b){
    return mod(mod(a)+mod(b));
}
long long mul(long long a, long long b){
    return mod(mod(a)*mod(b));
}
ll modPow(ll a, ll b){
    if(b==0) return 1LL;
    if(b==1) return a%M;
    ll res=1;
    while(b){
        if(b%2==1) res=mul(res,a);
        a=mul(a,a);
        b=b/2;
    }
    return res;
}

void init() {
    fastIO;
    #ifdef NameForIfDef
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
}

//===============================================================================//
void solve(){

}

int main(){
    init();
    ll test = 1;
    cin >> test;
    while(test--){
        int n;
	    string in;
	    cin >> n >> in;
	    string res = in;
	    if (res[0] == '0' || res.back() == '0') {
	    	nope;
	        continue;
	    }
	    vector<int> diff, same;
	    rep(i,0,n) {
	        if (res[i] == '0') {
	            diff.pb(i);
	        } else {
	            same.pb(i);
	        }
	    }
	    string res1, res2;
	    res1 = res2 = in;
	    if (diff.size()&1) {
	        nope;
	        continue;
	    }
	    bool s1 = true;
	    for (int i : diff) {
	        if (s1) {
	            res1[i] = ')';
	            res2[i] = '(';
	        } else {
	            res1[i] = '(';
	            res2[i] = ')';            
	        }
	        s1 = !s1;
	    }
	    int left = 0, right = same.size() - 1;
	 
	    while (left < right) {
	        int l = same[left];
	        int r = same[right];
	        res1[l] = res2[l] = '(';
	        res1[r] = res2[r] = ')';
	        left++; 
	        right--;
	    }
	    yup;
	    cout << res1 << endl;
	    cout << res2 << endl;
    }
return 0;
}
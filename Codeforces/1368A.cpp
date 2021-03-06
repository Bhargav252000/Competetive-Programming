#include <bits/stdc++.h>
#include <iostream>

#define ll long long
#define ui unsigned int
#define pb push_back
#define INF 1e9
#define all(x) x.begin(), x.end()
#define endl "\n"
#define lb lower_bound
#define ub upper_bound
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
//alt + ctrl + N

int power(int a, int n) {
    int res = 1;
    while (n) {
        if (n%2) {
            res *= a;
            n--;
        }
        else {
            a *= a;
            n /= 2;
        }
    }
    return res;
}


int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll test;
    cin >> test;
    while (test--){
        ll a, b, n;
        cin >> a >> b >> n;
        ll cnt = 0;
        while (max(a,b) <= n) {
            if(a < b){
                a += b;
            }else{
                b += a;
            }
            cnt += 1;
        }
        cout << cnt << endl;

    }

    return 0;
}



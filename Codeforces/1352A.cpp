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
    while(n){
        if(n%2){
          res *= a;
          n--;
        }else{
           a *= a;
           n /= 2;
        }
    }
    return res;
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ll test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<int>ans;
        int p = 1;
        while(n > 0){
            if(n%10 > 0){
                ans.pb((n%10) * p);
            }
            n /= 10;
            p *= 10;
        }
        cout << ans.size() << endl;
        for(auto num : ans){
            cout << num << " ";
        }
        cout << endl;
    }
return 0;
}
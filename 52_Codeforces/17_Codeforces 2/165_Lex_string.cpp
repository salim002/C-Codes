#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
const int mod = 1000000007;
// const int mod = 998244353;
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    ll n, m, k, i;
    cin>>n>>m>>k;
    string a, b, c;
    cin>>a>>b;
    sort(all(a));
    sort(all(b));
    reverse(all(a));
    reverse(all(b));
    ll x=0, y=0;
    while(!a.empty() && !b.empty()){
        bool flag = a.back()<b.back();
        if(flag && x==k){
            flag = false;
        }
        if(!flag && y==k){
            flag = true;
        }
        if(flag){
            c.push_back(a.back());
            x++;
            y=0;
            a.pop_back();
        }
        else{
            c.push_back(b.back());
            y++;
            x=0;
            b.pop_back();
        }
    }
    cout<<c<<endl;
}

int main(){
    fast_io
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
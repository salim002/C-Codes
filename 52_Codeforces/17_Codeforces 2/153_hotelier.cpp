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
    ll n, i;
    cin>>n;
    string s;
    cin>>s;
    vl v(10, 0);
    ll l=0, r=9;
    for(i=0; i<n; i++){
        if(s[i]=='L'){
            while(v[l]){
                l++;
            }
            v[l]=1;
        }
        else if(s[i]=='R'){
            while(v[r]){
                r--;
            }
            v[r]=1;
        }
        else{
            ll x = s[i]-'0';
            v[x]=0;
            l = min(l, x);
            r = max(r, x);
        }
    }
    for(i=0; i<10; i++){
        cout<<v[i];
    }
    cout<<endl;
}

int main(){
    fast_io
    solve();

    return 0;
}
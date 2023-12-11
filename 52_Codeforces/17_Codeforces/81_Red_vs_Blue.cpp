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

void solve(){
    ll n, r, b;
    cin>>n>>r>>b;
    if(b==1){
        for(ll i=0; i<n; i++){
            if(i==n/2){
                cout<<"B";
                continue;
            }
            cout<<"R";
        }
        cout<<endl;
        return;
    }
    int divs = b+1;
    ll gap = (r+divs-1)/divs;
    string ans= "";
    for(ll i=1; i<r; i++){
        ans += 'R';
        if(i%gap==0 && b>0){
            ans += 'B';
            b--;
        }
    }
    if(ans.size()<(n-b)){
        ans+='R';
    }
    for(ll i=0; i<=ans.size()-1; i++){
        cout<<ans[i];
        if(b>0 && ans[i]=='R' && (i+1)<ans.size() && ans[i+1]=='R'){
            cout<<'B';
            b--;
        }
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
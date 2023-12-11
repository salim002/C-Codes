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
    ll a, s, i;
    cin>>a>>s;
    vl ans;
    while(s){
        ll x = a%10;
        ll y = s%10;
        if(x<=y){
            ans.push_back(y - x);
        }
        else{
            s/=10;
            y += 10*(s%10);
            if(x<y && y>=10 && y<=19){
                ans.push_back(y-x);
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
        a/=10;
        s/=10;
    }
    if(a){
        cout<<-1<<endl;
    }
    else{
        while(ans.back()==0){
            ans.pop_back();
        }
        reverse(all(ans));
        for(auto it:ans){
            cout<<it;
        }
        cout<<endl;
    }
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
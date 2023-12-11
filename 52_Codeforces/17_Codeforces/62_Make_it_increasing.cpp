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
    ll n, i;
    cin>>n;
    vl v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans = 0;
    while(true){
        i = 1;
        bool flag = true;
        while(i<n){
            if(v[i-1]==0 && v[i]==0){
                cout<<-1<<endl;
                return;
            }
            if(v[i-1]>=v[i]){
                v[i-1] /= 2;
                ans++;
                flag = false;
                break;
            }
            i++;
        }
        if(flag){
            break;
        }
    }
    cout<<ans<<endl;
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
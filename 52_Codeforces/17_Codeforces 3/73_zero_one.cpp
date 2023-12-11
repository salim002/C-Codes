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

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return fac(n)/(fac(r) * fac(n-r));
}

void solve(){
    ll n, x, y, i;
    cin>>n>>x>>y; 
    string a, b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    vl v(n);
    ll cnt=0, ans=0;
    for(i=0; i<n; i++){
        v[i] = a[i]^b[i];
        if(v[i]==1){
            cnt++;
        }
    }
    if(cnt%2==1){
        cout<<-1<<endl;
        return;
    }
    bool ok=false;
    for(i=0; i<n-1; i++){
        if(v[i]==1 && v[i+1]==1){
            ok=true;
            break;
        }
    }
    if(cnt==2){
        if(ok){
            if(n>2){
                if(2*y>x){
                    cout<<x<<endl;
                    return;
                }
                else{
                    cout<<2*y<<endl;
                    return;
                }
            }
            else{
                cout<<x<<endl;
                return;
            }
        }
        else{
            cout<<y<<endl;
            return;
        }
    }
    // ans = (cnt/2)*y;
    // ll temp1=0, temp2=0;
    // for(i=0; i<n; i++){
    //     if(i+1<n && v[i]==1 && v[i+1]==1){
    //         if(2*y>x){
    //             ans+=x;
    //             cnt-=2;
    //         }
    //         else{
    //             ans+=2*y;
    //         }
    //     }
    // }
    ans=(cnt/2)*y;
    // ans = ans+temp1*x-temp1*y+temp2*y;
    // for(auto it:v){
    //     cout<<it;
    // }
    // cout<<endl;
    cout<<ans<<endl;
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
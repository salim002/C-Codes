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
    vl a(n), b(n);
    ll mx = 0, x=0;
    for(i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>mx){
            x=i;
        }
        mx = max(mx, a[i]);
    }
    for(i=0; i<n; i++){
        cin>>b[i];
    }
    bool f = true;
    if(a[x]<b[x]){
        cout<<"NO"<<endl;
        return;
    }
    ll d=a[x]-b[x];
    for(i=0; i<n; i++){
        if(a[i]<b[i]){
            cout<<"NO"<<endl;
            return;
        }
        else{
            if((a[i]-b[i])>d){
                cout<<"NO"<<endl;
                return;
            }
            else if((a[i]-b[i])<d){
                if(b[i]!=0){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;

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
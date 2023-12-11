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
    ll n, m, i;
    cin>>n>>m;
    string a, b;
    cin>>a>>b;
    ll j=0, o=0, z=0;
    for(i=0; i<n; i++){
        if(i==(n-m)){
            if(a[i]==b[j]){
                j++;
                continue;
            }
            else{
                if((b[j]=='1' && o) || (b[j]=='0' && z)){
                    j++;
                    continue;
                }
                else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        else if(i>(n-m)){
            if(a[i]==b[j]){
                j++;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else{
            if(a[i]=='0'){
                z++;
            }
            else{
                o++;
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
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
    ll n, i, j;
    cin>>n;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    for(i=0; i<n; i++){
        ll a;
        cin>>a;
        string s;
        cin>>s;
        for(j=0; j<s.size(); j++){
            if(s[j]=='U'){
                if(v[i]==0){
                    v[i]=9;
                }
                else{
                    v[i]--;
                }
            }
            else{
                if(v[i]==9){
                    v[i]=0;
                }
                else{
                    v[i]++;
                }
            }
        }
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
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
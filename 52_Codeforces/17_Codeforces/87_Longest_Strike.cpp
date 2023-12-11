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
    ll n, k, i;
    cin>>n>>k;
    vl v(n);
    map<ll, ll> m;
    for(i=0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
    }
    sort(v.begin(), v.end());
    ll L = -1, R = -1, l = -1, r;
    for(i=0; i<n; i++){
        if(m[v[i]]<k){
            continue;
        }
        if(l==-1){
            l = v[i];
        }
        if(i==n-1 || (v[i+1]-v[i])>1 || m[v[i+1]]<k){
            r = v[i];
            if((r-l)>=(R-L)){
                R=r;
                L=l;
            }
            l = -1;
            r = -1;
        }
    }
    if(L==-1){
        cout<<-1<<endl;
    }
    else{
        cout<<L<<" "<<R<<endl;
    }
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
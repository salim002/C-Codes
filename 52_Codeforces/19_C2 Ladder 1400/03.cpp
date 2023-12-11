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
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int mod = 1000000007;
const ll M = 998244353;

ll mul(ll a, ll b){
    return ((a%M)*(b%M))%M;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%M;
    ll res=1;
    while(b>0){
        if(b&1){
            res = mul(res, a);
        }
        b = b>>1;
        a = mul(a, a);
    }
    return res;
}

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res = mul(res, i);
    }
    return res;
}

ll dv(ll a, ll b){
    return mul(a, modPower(b, M-2));
}

ll nCr(ll n, ll r){
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vi v;
    for(int i=0; i<n; i++){
        if(s[i]=='*'){
            v.push_back(i+1);
        }
    }
    int med=0, m=v.size();
    if(m==0){
        cout<<0<<'\n';
        return;
    }
    if(m&1){
        med=v[m/2];
    }
    else{
        med = (v[(m-1)/2]+v[m/2])/2;
    }
    bool f=false;
    ll ans=0;
    int pivot=0;
    for(int i=0; i<m; i++){
        if(v[i]==med){
            f=true;
            pivot=i;
            break;
        }
        if(v[i]<med && v[i+1]>med){
            pivot=i;
            break;
        }
    }
    int cnt=0;
    for(int i=pivot; i>=0; i--){
        if(f){
            if(v[i]==med){
                continue;
            }
            int tmp=med-v[i]-1;
            ans+=tmp;
            ans-=cnt;
            cnt++;
        }
        else{
            int tmp=med-v[i];
            ans+=tmp;
            ans-=cnt;
            cnt++;
        }
    }
    cnt=0;
    for(int i=pivot+1; i<m; i++){
        if(v[i]==med){
            continue;
        }
        int tmp=v[i]-med-1;
        ans+=tmp;
        ans-=cnt;
        cnt++;
    }
    // cout<<f<<'\n';
    // cout<<med<<" "<<pivot<<'\n';
    cout<<ans<<'\n';
}

int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
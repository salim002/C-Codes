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
    vl v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vl p, q;
    for(auto it:v){
        if(it&1){
            q.push_back(it);
        }
        else{
            p.push_back(it);
        }
    }
    sort(all(p));
    sort(all(q));
    reverse(all(p));
    reverse(all(q));
    int ps=p.size(), qs=q.size();
    ll a=0, b=0;
    int ptr1=0, ptr2=0;
    bool f=true;
    while(ptr1<ps && ptr2<qs){
        if(f){
            if(p[ptr1]>q[ptr2]){
                a+=p[ptr1];
                ptr1++;
            }
            else{
                ptr2++;
            }
            f=false;
        }
        else{
            if(q[ptr2]>p[ptr1]){
                b+=q[ptr2];
                ptr2++;
            }
            else{
                ptr1++;
            }
            f=true;
        }
    }
    while(ptr1<ps){
        if(f){
            a+=p[ptr1];
            f=false;
        }
        else{
            f=true;
        }
        ptr1++;
    }
    while(ptr2<qs){
        if(f){
            f=false;
        }
        else{
            b+=q[ptr2];
            f=true;
        }
        ptr2++;
    }
    if(a>b){
        cout<<"Alice";
    }
    else if(b>a){
        cout<<"Bob";
    }
    else{
        cout<<"Tie";
    }
    cout<<'\n';
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
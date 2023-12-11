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
    string s1, s2;
    cin>>s1>>s2;
    vi v(n);
    for(int i=0; i<n; i++){
        if(s1[i]=='B' && s2[i]=='B'){
            v[i]=2;
        }
        else if(s1[i]=='B'){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
    int l=0, r=n-1;
    while(l<n && v[l]==2){
        l++;
    }
    while(r>=0 && v[r]==2){
        r--;
    }
    if(l==n){
        cout<<"YES"<<'\n';
        return;
    }
    bool f=true;
    int curr=v[l];
    for(int i=l; i<=r; i++){
        if(v[i]==2){
            int cnt=1, j=i+1;
            while(j<=r && v[j]==2){
                j++;
                cnt++;
            }
            if(j>r){
                break;
            }
            if(cnt&1){
                if(v[j]==curr){
                    f=false;
                    break;
                }
            }
            else{
                if(v[j]!=curr){
                    f=false;
                    break;
                }
            }
            i=j-1;
            continue;
        }
        if(i>0 && v[i]!=v[i-1] && v[i-1]!=2){
            f=false;
            break;
        }
        curr=v[i];
    }
    if(f){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<'\n';
    // cout<<l<<" "<<r<<'\n';
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
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
    ll n, i;
    string a, b;
    cin>>a>>b;
    if(a==b){
        cout<<"="<<endl;
        return;
    }
    ll n1=a.size(), n2=b.size();
    map<char, ll> mp;
    mp['S']=1;
    mp['M']=2;
    mp['L']=3;
    if(mp[a[n1-1]]>mp[b[n2-1]]){
        cout<<">"<<endl;
    }
    else if(mp[a[n1-1]]<mp[b[n2-1]]){
        cout<<"<"<<endl;
    }
    else{
        if(a[n1-1]=='S'){
            if(n1>n2){
                cout<<"<"<<endl;
            }
            else{
                cout<<">"<<endl;
            }
        }
        else{
            if(n1>n2){
                cout<<">"<<endl;
            }
            else{
                cout<<"<"<<endl;
            }
        }
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
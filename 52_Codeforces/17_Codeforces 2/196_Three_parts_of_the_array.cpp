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
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll a=0, b=n-1, sum=0;
    ll t1=v[a], t2=v[b];
    while(a<b){
        if(t1==t2){
            sum+=t1;
            a++;
            b--;
            t1=0;
            t2=0;
            t1+=v[a];
            t2+=v[b];
        }
        else if(t1>t2){
            b--;
            t2+=v[b];
        }
        else{
            a++;
            t1+=v[a];
        }
    }
    cout<<sum<<endl;
}

int main(){
    fast_io
    solve();
    return 0;
}
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
    ll n, i;
    cin>>n;
    vl v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    ll l=0, r=n-1, ans=0;
    ll sum1=v[l], sum2=v[r];
    ll a=1, b=1;
    while(r>l){
        if(sum1>sum2){
            r--;
            sum2 += v[r];
            b++;
        }
        else if(sum1<sum2){
            l++;
            sum1 += v[l];
            a++;
        }
        else{
            ans += (a+b);
            a=0;
            b=0;
            l++;
            sum1 += v[l];
            a++;
        }
    }
    cout<<ans<<endl;
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
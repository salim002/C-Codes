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
    vl v(n), pos, neg, p;

    for(i=0; i<n; i++){
        cin>>v[i];
        if(v[i]>0){
            pos.push_back(v[i]);
        }
        else if(v[i]<0){
            neg.push_back(v[i]);
        }
        else{
            if(p.size()<2){
                p.push_back(v[i]);
            }
        }
    }
    if(pos.size()>2 || neg.size()>2){
        cout<<"NO"<<endl;
        return;
    }
    for(auto it:pos){
        p.push_back(it);
    }
    for(auto it:neg){
        p.push_back(it);
    }
    // for(auto it:p){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    ll s=p.size();
    for(i=0; i<s-2; i++){
        for(ll j=i+1; j<s-1; j++){
            for(ll k=j+1; k<s; k++){
                auto it = find(p.begin(), p.end(), (p[i]+p[j]+p[k]));
                if(it==p.end()){
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
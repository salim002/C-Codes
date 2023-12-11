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
    ll n, q;
    cin>>n>>q;
    map<ll, ll> r, c;
    set<ll> row, col;
    while(q--){
        ll a;
        cin>>a;
        if(a==1){
            ll x1, y1;
            cin>>x1>>y1;
            row.insert(x1);
            col.insert(y1);
            r[x1]++;
            c[y1]++;
        }
        else if(a==2){
            ll x1, y1;
            cin>>x1>>y1;
            r[x1]--;
            c[y1]--;
            if(r[x1]==0){
                row.erase(x1);
            }
            if(c[y1]==0){
                col.erase(y1);
            }
            
        }
        else{
            ll x1, y1, x2, y2;
            cin>>x1>>y1>>x2>>y2;
            ll x=0, y=0;
            for(auto it:row){
                if(it<(x2+1)){
                    x++;
                }
            }
            for(auto it:row){
                if(it<(x1)){
                    x--;
                }
            }
            for(auto it:col){
                if(it<(y2+1)){
                    y++;
                }
            }
            for(auto it:col){
                if(it<(y1)){
                    y--;
                }
            }
            if(x==(x2-x1+1) || y==(y2-y1+1)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
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
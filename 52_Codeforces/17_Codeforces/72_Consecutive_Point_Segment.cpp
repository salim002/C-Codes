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
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    bool move = false;
    for(i=1; i<n; i++){
        if((v[i]-v[i-1])>3){
            cout<<"NO"<<endl;
            return;
        }
        if((v[i]-v[i-1])==0){
            continue;
        }
        if((v[i]-v[i-1])==2 && !move){
            move = true;
            continue;
        }
        if((v[i]-v[i-1])==2 && move){
            v[i]=v[i]-1;
        }
        if((v[i]-v[i-1])==3){
            if(move==false){
                move = true;
                v[i]=v[i]-1;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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
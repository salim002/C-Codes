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
    string s;
    cin>>s;
    ll n = s.size(), ans = 0;
    for(ll i=0; i<n; i++){
        ans += (s[i] - 96);
    }
    if(s.size()==1){
        cout<<"Bob "<<s[0]- 96<<endl;
    }
    else if(s.size()%2==0){
        cout<<"Alice "<<ans<<endl;
    }
    else{
        if(s[0]>=s[n-1]){
            ans -= 2*(s[n-1]-96);
            if(ans>0){
                cout<<"Alice "<<ans<<endl;
            }
            else{
                cout<<"Bob "<<s[n-1]-96<<endl;
            }
        }
        else{
            ans -= 2*(s[0]-96);
            if(ans>0){
                cout<<"Alice "<<ans<<endl;
            }
            else{
                cout<<"Bob "<<s[0]-96<<endl;
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
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

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, i;
        cin>>n;
        vl v(n);
        for(i=0; i<n; i++){
            cin>>v[i];
        }
        map<int, int> m;
        for(auto it:v){
            m[it]++;
        }
        ll start=0, end=0, ans=0, x = m[0];
        for(i=0; i<n; i++){
            if(v[i]==0){
                if(m[0]==x){
                    start = i-1;
                }
                m[0]--;
                if(m[0]==0){
                    end = i+1;
                }
            }
        }
        ans = end-start;
        cout<<ans<<endl;
    }
    return 0;
}
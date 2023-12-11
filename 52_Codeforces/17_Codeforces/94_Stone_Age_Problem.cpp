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
    ll n, q, i;
    cin>>n>>q;
    vl v(n+1), ans;
    ll sum = 0;
    map<ll, ll> m;
    for(i=1; i<=n; i++){
        cin>>v[i];
        sum += v[i];
        m[i] = v[i];
    }
    ll temp;
    while(q--){
        ll a, b, c;
        cin>>a;
        if(a==2){
            cin>>c;
            m.clear();
            temp = c;
            sum = c*n;
            // cout<<sum<<endl;
            // ans.push_back(c*n);
        }
        else{
            cin>>b>>c;
            if(!m[b]){
                m[b] = temp;
            }
            sum -= m[b];
            sum += c;
            m[b] = c;
            // ans.push_back(sum);
            // cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
    // for(auto it:ans){
    //     cout<<it<<endl;
    // }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
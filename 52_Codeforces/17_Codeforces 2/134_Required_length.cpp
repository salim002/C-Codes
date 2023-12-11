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

// ll len(ll n){
//     ll size = 0;
//     while(n>0){
//         n /= 10;
//         size++;
//     }
//     return size;
// }

// ll maxDigit(ll n){
//     ll mx = 0, sz = len(n);
//     string s = to_string(n);
//     for(ll i=0; i<sz; i++){
//         mx = max(mx, ll(s[i]-'0'));
//     }
//     return mx;
// }

void solve(){
    ll n, x;
    cin>>n>>x;
    // if(len(x)==n){
    //     cout<<0<<endl;
    //     return;
    // }
    if(x==1){
        if(n==1){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        return;
    }
    queue<ll> q;
    map<ll, ll> m;
    m[x] = 0;
    q.push(x);
    while(!q.empty()){
        ll k = q.front();
        q.pop();
        string s = to_string(k);
        if(s.size()==n){
            cout<<m[k]<<endl;
            return;
        }
        for(auto it:s){
            if(it=='0'){
                continue;
            }
            ll temp = k * (it-'0');
            if(!m.count(temp)){
                m[temp] = m[k]+1;
                q.push(temp);
            }
        }
    }
    cout<<-1<<endl;
}

int main(){
    fast_io
    solve();
    return 0;
}
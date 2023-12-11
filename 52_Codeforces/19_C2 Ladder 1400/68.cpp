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
#define pb push_back
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

const int mod = 1000000007;
const ll M = 998244353;

ll mul(ll a, ll b){
    return ((a%mod)*(b%mod))%mod;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%mod;
    ll res=1;
    while(b>0){
        if(b&1){
            res = mul(res, a);
        }
        b = b>>1;
        a = mul(a, a);
    }
    return res;
}

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res = mul(res, i);
    }
    return res;
}

ll dv(ll a, ll b){
    return mul(a, modPower(b, mod-2));
}

ll nCr(ll n, ll r){
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

void solve(){
    int n;
    cin>>n;
    priority_queue<int> pq;
    unordered_map<int, list<int>> mp;
    unordered_map<int, bool> vis;
    int ptr=1, idx=1;
    while(n--){
        int x;
        cin>>x;
        if(x==1){
            int m;
            cin>>m;
            if(!mp.count(m)){
                pq.push(m);
            }
            mp[m].push_back(idx);
            idx++;
        }
        else if(x==2){
            while(vis[ptr]){
                ptr++;
            }
            vis[ptr]=true;
            cout<<ptr<<" ";
            ptr++;
        }
        else{
            while(!pq.empty()){
                int curr=pq.top();
                pq.pop();
                while(vis[mp[curr].front()]){
                    mp[curr].pop_front();
                }
                if(mp[curr].size()>0){
                    cout<<mp[curr].front()<<" ";
                    vis[mp[curr].front()]=true;
                    mp[curr].pop_front();
                    if(mp[curr].size()>0){
                        pq.push(curr);
                    }
                    else{
                        mp.erase(curr);
                    }
                    break;
                }
                else{
                    mp.erase(curr);
                }
            }
        }
    }
    cout<<'\n';
}

int main(){
    fast_io
    // int t;
    // cin>>t;
    // while(t--){
    // }
    solve();
    return 0;
}
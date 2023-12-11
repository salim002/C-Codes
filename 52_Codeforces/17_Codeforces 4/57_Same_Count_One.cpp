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
    return ((a%M)*(b%M))%M;
}

ll modPower(ll a, ll b){
    if(b==0){
        return 1;
    }
    a = a%M;
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
    return mul(a, modPower(b, M-2));
}

ll nCr(ll n, ll r){
    return dv(fac(n), mul(fac(r), fac(n-r)));
}

void solve(){
    int n, m;
    cin>>n>>m;
    vector<vi> v(n);
    int cnt=0;
    vector<vector<int>> p;
    for(int i=0; i<n; i++){
        int tmp=0;
        for(int j=0; j<m; j++){
            int x;
            cin>>x;
            v[i].push_back(x);
            if(x==1){
                tmp++;
            }
        }
        p.push_back({tmp, i});
        cnt+=tmp;
    }
    // for(auto it:p){
    //     for(auto i:it){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    sort(all(p));
    if(cnt%n!=0){
        cout<<-1<<'\n';
        return;
    }
    cnt/=n;
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=abs(cnt-p[i][0]);
    }
    cout<<ans/2<<'\n';
    for(int i=0; i<n; i++){
        if(p[i][0]<cnt){
            int j=n-1;
            while(j>=0 && p[j][0]<=cnt){
                j--;
            }
            int tmp=0;
            while(p[i][0]<cnt && p[j][0]>cnt){
                cout<<p[i][1]+1<<" "<<p[j][1]+1<<" ";
                for(int k=tmp; k<m; k++){
                    if(v[p[j][1]][k]==1 && v[p[i][1]][k]!=v[p[j][1]][k]){
                        v[p[i][1]][k]++;
                        v[p[j][1]][k]--;
                        p[i][0]++;
                        p[j][0]--;
                        cout<<k+1<<'\n';
                        tmp=k+1;
                        break;
                    }
                }
            }
            if(p[i][0]<cnt){
                i--;
            }
        }
    }
}

int main(){
    fast_io
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
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

// void fillRow(vector<string> v, int i, vector<vector<bool>> &vis, int n){
//     for(int j=n-1; j>=0; j--){
//         if(v[i][j]=='1'){
//             vis[i][j]=true;
//         }
//         else{
//             break;
//         }
//     }
// }

// void fillCol(vector<string> v, int j, vector<vector<bool>> &vis, int n){
//     for(int i=n-1; i>=0; i--){
//         if(v[i][j]=='1'){
//             vis[i][j]=true;
//         }
//         else{
//             break;
//         }
//     }
// }

// bool chekcRow(vector<string> v, vector<vector<bool>> &vis, int a, int b, int n){
//     vis[a][b]=true;
//     for(int i=b+1; i<n; i++){
//         if(vis[a][i]){
//             return true;
//         }
//         if(v[a][i]=='0'){
//             return false;
//         }
//         else{
//             vis[a][i]=true;
//         }
//     }
//     return true;
// }
// bool chekcCol(vector<string> v, vector<vector<bool>> &vis, int a, int b, int n){
//     vis[a][b]=true;
//     for(int i=a+1; i<n; i++){
//         if(vis[i][b]){
//             return true;
//         }
//         if(v[i][b]=='0'){
//             return false;
//         }
//         else{
//             vis[i][b]=true;
//         }
//     }
//     return true;
// }

void solve(){
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(v[i][j]=='1' && v[i+1][j]!='1' && v[i][j+1]!='1'){
                cout<<"NO"<<'\n';
                return;
            }
        }
    }
    cout<<"YES"<<'\n';
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
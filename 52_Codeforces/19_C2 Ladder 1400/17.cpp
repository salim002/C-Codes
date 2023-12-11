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

vector<int> PrimeFactors(int n, int &even, int &odd){
    n = abs(n);
    vector<int> v;
    if(n%2==0){
        v.push_back(2);
        while(n%2==0){
            even++;
            n/=2;
        }
    }
    for(int i=3; i*i<=n; i++){
        if(n%i==0){
            v.push_back(i);
            while(n%i==0){
                odd++;
                n/=i;
            }
        }
    }
    if(n>2){
        v.push_back(n);
        odd++;
    }
    return v;
}

void solve(){
    int n, even=0, odd=0;;
    cin>>n;
    if(n&1){
        if(n==1){
            cout<<"FastestFinger"<<'\n';
        }
        else{
            cout<<"Ashishgup"<<'\n';
        }
    }
    else{
        if(n==2){
            cout<<"Ashishgup"<<'\n';
        }
        else{
            vector<int> v = PrimeFactors(n, even, odd);
            if(v.size()==1){
                cout<<"FastestFinger"<<'\n';
            }
            else{
                // cout<<even<<" "<<odd<<endl;
                if(even==1){
                    if(odd>1){
                        cout<<"Ashishgup"<<'\n';
                    }
                    else{
                        cout<<"FastestFinger"<<'\n';
                    }
                }
                else{
                    cout<<"Ashishgup"<<'\n';
                }
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
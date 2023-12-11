// Codeforces

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

long long binary_to_decimal(string s){
    long long r=1, res=0;
    for(int i=s.size()-1; i>=0; i--){
        res += ((s[i]-'0')*r);
        r*=2;
    }
    return res;
}

void solve(){
    ll n;
    cin>>n;
    ll res=(n<<1);
    string s1=bitset<64> (n).to_string();
    int idx=0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='0'){
            idx++;
        }
        else{
            break;
        }
    }
    s1 = s1.substr(idx);
    string s2 = s1+"0";
    // cout<<s1<<'\n';
    // cout<<s2<<'\n';
    // cout<<'\n';
    int c=1;
    string a="", b="";
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='1'){
            if(s2[i+1]=='1' && c==1){
                cout<<-1<<'\n';
                return;
            }
            a+="1";
            b+="0";
        }
        else{
            if(s2[i+1]=='0'){
                if(c==1){
                    c--;
                    a+="1";
                    b+="1";
                }
                else{
                    a+="0";
                    b+="0";
                }
            }
            else{
                if(c==1){
                    a+='1';
                    b+='1';
                }
                else{
                    a+="0";
                    b+="0";
                    c++;
                }
            }
        }
    }
    if(c!=0){
        cout<<-1<<'\n';
        return;
    }
    // cout<<a<<'\n';
    // cout<<b<<'\n';
    // cout<<'\n';
    cout<<binary_to_decimal(a)<<" "<<binary_to_decimal(b)<<'\n';
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
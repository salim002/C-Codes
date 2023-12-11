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

bool isValid(string s){
    int n=s.size();
    stack<char> st;
    for(int i=0; i<n; i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            if(st.top()==')'){
                return false;
            }
            st.pop();
        }
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=count(all(s), '(');
    int b=count(all(s), ')');
    if(a!=b){
        cout<<-1<<endl;
        return;
    }
    // cout<<isValid(s)<<endl;
    if(isValid(s)){
        cout<<1<<endl;
        while(n--){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    vi v(n, 1);
    stack<char> st;
    for(int i=n-1; i>=0; i--){
        if(s[i]=='('){
            if(st.empty()){
                st.push('(');
                v[i]=2;
            }
            else{
                if(st.top()==')'){
                    st.pop();
                }
                else{
                    st.push('(');
                    v[i]=2;
                }
            }
        }
        else{
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(st.top()=='('){
                    st.pop();
                    v[i]=2;
                }
                else{
                    st.push(')');
                }
            }
        }
    }
    if(count(all(v), 2)==n){
        cout<<1<<endl;
        while(n--){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<2<<endl;
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
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
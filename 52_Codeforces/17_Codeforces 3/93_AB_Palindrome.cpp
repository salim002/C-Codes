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
#define all(x) x.begin(), x.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

ll fac(ll n){
    ll res=1;
    for(ll i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

ll nCr(ll n, ll r){
    return fac(n)/(fac(r) * fac(n-r));
}

bool isPowerOfTwo(ll n){
    return n && (!(n&(n-1)));
}

void solve(){
    ll a, b;
    cin>>a>>b;
    string s;
    cin>>s;
    if(a+b==1){
        if(a==1){
            if(s[0]=='0' || s[0]=='?'){
                cout<<'0'<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            if(s[0]=='1' || s[0]=='?'){
                cout<<'1'<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        return;
    }
    ll l=0, r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]){
            if(s[l]=='?' || s[r]=='?'){
                if(s[l]=='0' || s[r]=='0'){
                    s[l]='0';
                    s[r]='0';
                }
                else{
                    s[l]='1';
                    s[r]='1';
                }
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
        l++;
        r--;
    }
    // cout<<s<<endl;
    ll z=a, o=b;
    for(auto it:s){
        if(it=='0'){
            z--;
        }
        else if(it=='1'){
            o--;
        }
    }
    if(o<0 || z<0){
        cout<<-1<<endl;
        return;
    }
    ll n=s.size();
    ll k = n/2 + (n%2==1);
    for(ll i=0; i<k; i++){
        if(s[i]=='?'){
            if(i==n-i-1){
                if(z>0){
                    s[i]='0';
                }
                else if(o>0){
                    s[i]='1';
                }
                else{
                    cout<<-1<<endl;
                    return;
                }
                continue;
            }
            if(z>=2){
                s[i]='0';
                s[n-i-1]='0';
                z-=2;
            }
            else if(o>=2){
                s[i]='1';
                s[n-i-1]='1';
                o-=2;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
    }
    // if(z!=0 || o!=0){
    //     cout<<-1<<endl;
    //     return;
    // }
    // string tmp = s;
    // reverse(all(tmp));
    // if(s!=tmp){
    //     cout<<-1<<endl;
    //     return;
    // }
    cout<<s<<endl;
}

int main(){
    fast_io
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
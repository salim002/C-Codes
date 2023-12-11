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

void solve(){
    ll n, i;
    cin>>n; 
    string s1, s2;
    cin>>s1>>s2;
    if(s1==s2){
        cout<<"YES"<<endl;
        return;
    }
    if(s1.find("ab")==string::npos && s1.find("bc")==string::npos && s1!=s2){
        cout<<"NO"<<endl;
        return;
    }
    bool f = true;
    for(i=0; i<n; i++){
        if(s1[i]==s2[i]){
            continue;
        }
        if((s1[i]+1)!=s2[i]){
            f=false;
            break;
        }
        ll j=i+1;
        while(s1[i]==s1[j]){
            j++;
        }
        if(s1[j]!=s2[i]){
            f=false;
            break;
        }
        // swap(s1[i], s1[j]);
        s1[i]++;
        s1[j]--;
    }
    if(f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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
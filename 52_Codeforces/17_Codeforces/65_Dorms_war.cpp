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

bool Present(string s, char arr[],ll k){
    for(ll i=0; i<k; i++){
        if(s.find(arr[i]) != string::npos){
            return true;
        }
    }
    return false;
}
bool isPresent(char arr[], ll k, char c){
    for(ll i=0; i<k; i++){
        if(arr[i]==c){
            return true;
        }
    }
    return false;
}

void solve(){
    ll n, k, i;
    string s;
    cin>>n;
    cin>>s;
    cin>>k;
    char arr[k];
    set<char> st;
    for(i=0; i<k; i++){
        cin>>arr[i];
        st.insert(arr[i]);
    }
    ll ans=0, temp=0;
    for(i=0; i<n; i++){
        if(st.find(s[i])==st.end()){
            temp++;
        }
        else{
            ans = max(ans, temp);
            temp = 1;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}
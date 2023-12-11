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

void solve(){
    ll n, i;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0, count=0;
    char ch = s[0];
    for(i=0; i<n; i++){
        if(count==0){
            count++;
            ch = s[i]; 
            continue;
        }
        if(s[i]==ch){
            count++;
        }
        else{
            if(count%2==1){
                ans++;
                count=0;
            }
            else{
                count=1;
                ch = s[i];
            }
        }
    }
    // cout<<ans<<endl;
    ll seg = 0;
    char head = ' ';
    if(ans){
        for(i=0; i<n; i+=2){
            if(s[i]==s[i+1]){
                if(head != s[i]){
                    seg++;
                    head = s[i];
                }
            }
        }
    }
    else{
        for(i=0; i<n; i++){
            if(s[i]!= head){
                seg++;
                head = s[i];
            }
        }
    }
    if(seg==0){
        seg++;
    }
    cout<<ans<<" "<<seg<<endl;
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
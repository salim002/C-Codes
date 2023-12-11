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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, i;
        cin>>n;
        string s;
        cin>>s;
        if(s.size()==1){
            cout<<s<<s<<endl;
        }
        else{
            string ans = "";
            ans += s[0];
            bool repeat = false;
            for(i=0; i<n; i++){
                if(i==0){
                    continue;
                }
                if(s[i]<s[i-1]){
                    ans += s[i];
                    repeat = true;
                }
                else if(s[i]==s[i-1]){
                    if(repeat){
                        ans += s[i];
                    }
                    else{
                        break;
                    }
                }
                else{
                    break;
                }
            }
            cout<<ans;
            reverse(ans.begin(), ans.end());
            cout<<ans<<endl;
        }
    }
    
    return 0;
}
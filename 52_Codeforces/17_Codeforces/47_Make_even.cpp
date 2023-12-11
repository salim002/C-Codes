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
        string s;
        cin>>s;
        char a;
        a = s[s.size()-1];
        ll r = a - '0';
        a = s[0];
        ll l = a - '0';
        if(r%2==0){
            cout<<0<<endl;
        }
        else if(l%2==0){
            cout<<1<<endl;
        }
        else{
            bool flag = false;
            for(ll i=1; i<s.size(); i++){
                char a = s[i];
                ll b = a-'0';
                if(b%2==0){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout<<2<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
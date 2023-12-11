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
    ll n;
    cin>>n;
    ll min, max;
    if(n%6 != 0 && n%4 !=0){
        if(n%2==1 || n<=2){
            cout<<-1<<endl;
            return;
        }
        else{
            ll temp = n, count=0;
            while(temp%6 != 0){
                temp -= 4;
                count++;
            }
            min = temp/6 + count;
            count = 0;
            while(n%2 != 0){
                n -= 6;
                count++;
            }
            max = n/4 + count;
        }
    }
    if(n%6==0){
        min = n/6;
        if(n%4==0){
            max = n/4;
        }
        else{
            max = (n-6)/4 + 1;
        }
    }
    else if(n%4==0){
        max = n/4;
        ll count=0;
        while(n%6!=0){
            n -= 4;
            count++;
        }
        min = n/6 + count;
    }
    cout<<min<<" "<<max<<endl;
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
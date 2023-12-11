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

void print_ans(ll n){
    ll sum = 0;
    if(n%3==0 || n%3==2){
        ll temp = 2;
        while(sum!=n){
            cout<<temp;
            sum += temp;
            temp = 3-temp;
        }
    }
    else{
        ll temp = 1;
        while(sum!=n){
            cout<<temp;
            sum += temp;
            temp = 3 - temp;
        }
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        print_ans(n);
    }
    return 0;
}
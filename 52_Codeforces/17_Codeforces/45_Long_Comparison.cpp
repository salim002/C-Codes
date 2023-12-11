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
        ll a, b, n1, n2;
        cin>>a>>n1>>b>>n2;
        if(n1==n2){
            if(a==b){
                cout<<"="<<endl;
            }
            else if(a>b){
                cout<<">"<<endl;
            }
            else{
                cout<<"<"<<endl;
            }
        }
        else{
            while(a<=1000000){
                if(n1==0){
                    break;
                }
                else{
                    a *= 10;
                    n1--;
                }
            }
            while(b<=1000000){
                if(n2==0){
                    break;
                }
                else{
                    b *= 10;
                    n2--;
                }
            }
            if(n1>n2){
                cout<<">"<<endl;
            }
            else if(n1<n2){
                cout<<"<"<<endl;
            }
            else{
                if(a>b){
                    cout<<">"<<endl;
                }
                else if(a<b){
                    cout<<"<"<<endl;
                }
                else{
                    cout<<"="<<endl;
                }
            }
        }
    }
    
    return 0;
}
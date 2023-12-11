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

bool sortbyCond(const pair<ll, ll> &a, const pair<ll, ll> &b){
    if(a.first != b.first){
        return (a.first < b.first);
    }
    else{
        return a.second > b.second;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vl v1 = {2, 4, 2, 1, 5, 2, 4, 3};
    vl v2 = {7, 6, 13, 22, 100, 8, 9, 90};
    ll n = v1.size(), i;
    vector<pair<ll, ll>> v;
    for(i=0; i<n; i++){
        v.push_back(make_pair(v1[i], v2[i]));
    }
    sort(v.begin(), v.end(), sortbyCond);
    for(auto it:v){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}
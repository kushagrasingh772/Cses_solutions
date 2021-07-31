#include<bits/stdc++.h> 
using namespace std; 
#include <algorithm>
#define lli long long int;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll i;
    ll a[n];
    ll total=0;
    ll m=0;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for ( i = 1; i < n; i++)
    {
        total += max(0LL, m - arr[i]);
        m = max(m, arr[i]);
    }
    cout<<total;
    return 0;
}
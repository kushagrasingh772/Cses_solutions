#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,i;
    cin>>n;
    ll a[n];  
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll c=1;
    for ( i = 1; i < n; i++)
    {
        if (a[i]!=a[i-1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;    
}

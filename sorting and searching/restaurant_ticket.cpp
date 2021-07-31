#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    ll i;
    vector <pair<ll,bool>> m;
    ll a,b;
    ll c=0;
    ll maxp=0;
    while (n--)     
    {
        cin>>a>>b;
        m.push_back(make_pair(a,true));
        m.push_back(make_pair(b,false));
    }
    sort(m.begin(),m.end());
    for ( i = 0; i < m.size(); i++)
    {
        if (m[i].second)
        {
            c+=1;
        }
        else
        {
            c-=1;
        }
        maxp=max(c,maxp);
    }
    cout<<maxp<<endl;
    return 0;
}

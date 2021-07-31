#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i,n,m,k;
    cin>>n>>m>>k;
    ll a,b;
    priority_queue <ll> q1;
    priority_queue <ll> q2;
    for ( i = 0; i < n; i++)
    {
        cin>>a;
        q1.push(a);
    }
    for ( i = 0; i < m; i++)
    {
        cin>>b;
        q2.push(b);
    }
    
    ll c=0;
    ll t1=0;
    ll t2=0;
    while (!q2.empty() && !q1.empty())
    {
        t1=q1.top();
        t2=q2.top();
        if (abs(t1-t2)<=k)
        {
            c++;
            q1.pop();
            q2.pop();
        }
        else
        {
            if(max(q1.top(),q2.top())==t1)
            {
                q1.pop();
            }
            else
            {
                q2.pop();
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
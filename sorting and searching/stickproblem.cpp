#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    l t;
    cin>>t;
    l d=t;
    l k=0;
    vector <l> h(d);
    while (t--)
    {
        l n;
        cin>>n;
        vector <l> v(n);
        map <l,l>m;
        l c=0;
        for (l i = 0; i < n; i++)
        {
            cin>>v[i];
            m[v[i]]++;
            if (m[v[i]]==1 && v[i]!=0)
            {
                c++;
            }
        }
        h[k++]=c;
    }
    for (l i = 0; i < d; i++)
    {
        cout<<h[i]<<"\n";
    }
    return 0;
}
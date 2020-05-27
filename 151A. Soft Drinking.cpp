#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, drinks, lime, salt, ans;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    drinks = (k*l/nl);
    lime = (c*d);
    salt = (p/np);

    ans = min(drinks, lime);
    ans = min(ans, salt);
    ans /= n;

    cout<<ans<<endl;

    return 0;
}

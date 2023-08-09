#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

#define pb push_back
#define f first
#define s second
#define endl "\n"


void messi()
{
    int t = 1;
    for(cin >> t; t--;)
    {
        ll y, x, ans = 0;
        cin >> y >> x;
        
        if(y > x)
        {
            if(y%2)
                ans = (y-1)*(y-1) + x;
            else
                ans = y*y - (x-1);
        }
        else {
            if(x%2)
                ans = x*x - (y-1);
            else
                ans = (x-1)*(x-1) + y;
        }
        cout << ans << endl;
    }
}

int main()
{
    /* freopen("input.txt", "r", stdin); */
    /* freopen("output.txt", "w", stdout); */

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    /* int t = 1; */
    /* for(cin >> t; t--;) */
    /* { */
    /*     messi(); */
    /* } */

    messi();

    return 0;
}



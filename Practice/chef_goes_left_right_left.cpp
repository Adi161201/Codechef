#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        //write code here
        int n , k;
        cin>>n>>k;
        vector<int> left, right ;
        while(n--)
        {
            int x;
            cin>>x;
            if(x>k) left.push_back(x);
            else right.push_back(x);
        }
        bool ans1=true, ans2=true;
        for(int i=1;i<left.size();i++)
        {
            if(left[i]< left[i-1]) continue;
            else
            {
                ans1=false;
                break;
            }
        }
        for(int i=1;i<right.size();i++)
        {
            if(right[i]> right[i-1]) continue;
            else
            {
                ans2=false;
                break;
            }
        }

        if(ans1 && ans2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
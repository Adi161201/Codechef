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

int func(int n, vector<int> &a, vector<int> &b, int s1, int s2)
{
    double temp = (s1 + s2)/n;
    if( int(temp) != temp) return -1;

    int  z = (s1+s2)/n;

    for(int i=0;i<n;i++)
    {
        bool possible=false;
        for(int j=i;j<n;j++)
        {
            if(a[i]+ b[j]== z)
            {
                possible=true;
                swap(b[j], b[i]);
                break;
            }
        }
        if(possible==false) return -1;
    }
    return 0;
}
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
        int n;
        cin>>n;
        vector<int> a, b;
        int s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s1+=x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s2+=x;
            b.push_back(x);
        }
        
        int ans = func(n,a,b,s1,s2);
        if(ans==-1) cout<<-1<<endl;
        else 
        {
            for(auto it:a) cout<<it<<" ";
            cout<<endl;

            for(auto it:b) cout<<it<<" ";
            cout<<endl;

        }


    }
    return 0;
}
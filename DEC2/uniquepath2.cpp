
#include<bits/stdc++.h>
using namespace std; 
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define pll_ll          pair<long long,long long>
#define vi              vector<int>
#define vll            vector<long long>
#define si             set<int>
#define sll             set<ll,ll>
#define msll            multiset<ll,ll>
#define usll             unordered_set<ll>
#define umsll           unordered_multiset<ll,ll>
#define mii             map<int,int>
#define mll_ll           map<long long,long long>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e9
#define n_inf	        -1e9
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define rep(x,a,b)	for(int x = a; x < b; x++) 
#define per(x,a,b)	for(int x = a; x >= b; x--)
#define yes cout << "YES"<<endl 
#define no cout << "NO"<<endl
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool isprime(int x){rep(i,2,sqrt(x)+1){if(x%i==0)return false;}return true;}
int nsum(int x){return(x*(x+1))/2;}
int fact(int x){if(x<=1)return 1;else return x*fact(x-1);}
bool isPalindrome(string s){int n=s.length();rep(i,0,n/2){if(s[i]!=s[n-i-1])return false;}return true;}
int is_search(int a[],int k,int l,int r){if(l<=r){int mid=(l+r)/2;if(a[mid]==k)return mid;
        if(a[mid]<k)return is_search(a,k,mid+1,r);else return is_search(a,k,l,mid-1);}else{return -1;}}
int kidane(int a[],int n){int mx= INT16_MIN;int sum=0;rep(i,0,n){sum+=a[i];mx= max(sum,mx);if(sum<0)
        {sum=0;}}return mx;}

int dp[101][101];

int coutnpath(int n,int m,vector<vector<int>>obst)
{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(dp[i][j]!=-1)
            {
                int left=0,right=0;
                if(dp[i-1][j]!=-1)left=dp[i-1][j];
                if(dp[i][j-1]!=-1)right=dp[i][j-1];
                dp[i][j]=left+right;
            }
        }
    }
    return dp[n-1][m-1];
}

void solve()
{
    IO
    int n,m;//cin>>n>>m;
    vector<vector<int>>obst={{0,0}};
    n=obst[0].size();
        m=obst.size();
    /* rep(i,0,n)
    {
        vector<int>v;
        rep(j,0,m)
        {
            int x;cin>>x;
            v.push_back(x);
        }
        obst.push_back(v);
    } */
    rep(i,0,101)
    {
        rep(j,0,101)
        {
            if(i<n&&j<m&&obst[i][j]==1)dp[i][j]=-1;
            else dp[i][j]=0;
        }
    }
    rep(i,0,n)
    {
        if(obst[i][0]==1)break;
        dp[i][0]=1;
    }
    rep(i,0,m)
    {
        if(obst[0][i]==1)break;
        dp[0][i]=1;
    }
    if(obst[0][0]==1||obst[n-1][m-1]==1)cout<<0;
    else if(n==1||m==1)cout<<1;
    else cout<<coutnpath(n,n,obst);
    /* int k1= obst[0].size();
    cout<<k1; */
    

}

int main()
{
    int n,m;//cin>>n>>m;
    vector<vector<int>>obst={{0,0}};
    n=obst[0].size();
        m=obst.size();
        cout<<n<<" "<<m;
    //solve();
    return 0;
}


/* 


//

 */

///////////////////////////////////////////
//                                       //
//          CODE BY  @Advik              //
//          NickName->Fudan              //
///////////////////////////////////////////




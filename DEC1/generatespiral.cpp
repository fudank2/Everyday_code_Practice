
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



void solve()
{
    IO
    vector<vector<int>>ans;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            v.push_back(0);
        }
        ans.push_back(v);
    }
    int start_row=0,start_col=0,end_row=n-1,end_col=n-1;
    int k=1;
    while(start_col<=end_col&&start_row<=end_row)
    {
        if(start_col>end_col&&start_row>end_row)break;
        for(int i=start_col;i<=end_col;i++)
        {
            ans[start_row][i]=k;
            k++;
        }
        start_row++;
        if(start_col>end_col&&start_row>end_row)break;

        for(int i=start_row;i<=end_row;i++)
        {
            ans[i][end_col]=k;k++;
        }
        end_col--;
        if(start_col>end_col&&start_row>end_row)break;

        for(int i=end_col;i>=start_col;i--)
        {
            ans[end_row][i]=k;k++;
        }
        end_row--;
        if(start_col>end_col&&start_row>end_row)break;

        for(int i=end_row;i>=start_row;i--)
        {
            ans[i][start_col]=k;k++;
        }
        start_col++;
    }
    rep(i,0,n)
    {
        rep(j,0,n)cout<<ans[i][j]<<" ";
        cout<<"\n";
    }
}

int main()
{
    solve();
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




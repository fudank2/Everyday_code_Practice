
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



map<vector<int>,int>ans;

void subsets(vector<int>nums,int n,int i,vector<int>v)
{
    if(i>=n)
    {
        if(ans[v]!=1)
        {
            ans.insert({v,1});
        }

        return;
    }
    ans.insert({v,1});
    subsets(nums,n,i+1,v);
    v.push_back(nums[i]);
    subsets(nums,n,i+1,v);
}

void solve()
{
    IO
    vector<int>nums;
    int n;cin>>n;
    rep(i,0,n)
    {
        int x;cin>>x;
        nums.push_back(x);
    }
    vector<int>v;
    subsets(nums,n,0,v);
    vector<vector<int>>ans1;
    map<vector<int>,int>::iterator i;
    for(auto i=ans.begin();i!=ans.end();i++)
    {
        ans1.push_back(i->first);
    }
    rep(i,0,ans1.size())
    {
        rep(j,0,ans1[i].size())cout<<ans1[i][j]<<" ";
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




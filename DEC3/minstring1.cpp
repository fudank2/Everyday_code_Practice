
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
    string s="ADOBODEBANC";
    string t="ABC";
    int n=s.size();
    int m=t.size();
    string ans="uhilugk.jn";
    if(n<m)cout<<"nothing to print";
    else
    {
        
        map<char,int>mt;
        for(int i=0;i<m;i++)
        {
            if(mt[t[i]]>0)mt[t[i]]++;
            else mt[t[i]]=1;
        }
        map<char,int>msub;
        int i=0;
        int st=-1;
        int end=0;
        int count=0;
        

        while(i<=n)
        {
            if(count<m&&i<n)
            {
                if(mt[s[i]])
                {
                    if(msub[s[i]])msub[s[i]]++;
                    else msub[s[i]]=1;
                    count++;
                    if(st<0)st=i;
                    if(count==m)end=i;
                }
                i++;
            }
            else if(count>=m)
            {
                ans= s.substr(st,end-st+1);

                if(msub[s[st]])
                {
                    msub[s[st]]--;
                    count--;
                }
                st++;
            }
        }
        //rep(j,0,m)cout<<msub[t[j]]<<" ";
        cout<<st<<" "<<end;
    }
    cout<<ans<<"\n";
    
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




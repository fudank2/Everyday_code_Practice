
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


class ListNode{
    public:
    int val;
    ListNode*next = NULL;
    ListNode(int val1)
    {
        val=val1;
        next=NULL;
    }
};

void unique(ListNode*head)
{
    if(head==nullptr||head->next==nullptr)return ;//head;
    ListNode*pretemp=head;
    ListNode*temp=head->next;
    ListNode*nexttemp=head->next->next;
    ListNode*curr=nullptr;
    ListNode*head1=nullptr;
    if(nexttemp==nullptr)
    {
        if(pretemp->val==temp->val)return ;//nullptr;
        else cout<<head->val;
    }
    else{
        if(pretemp->val!=temp->val)
        {
            curr=pretemp;
            head1=pretemp;
        }
    }
    while(nexttemp!=nullptr)
    {
        if(pretemp->val!=temp->val&&temp->val!=nexttemp->val)
        {
            if(head1==nullptr)
            {
                head1= temp;
                curr=temp;
            }
            else
            {
                curr->next=temp;
            curr= curr->next;
            }

            
        }
        pretemp=pretemp->next;
        temp=temp->next;
        nexttemp=nexttemp->next;
    }
    if(temp->val!=pretemp->val)
    {
        curr->next=temp;
        curr= curr->next;

    }
    while(head1!=nullptr)
    {
        cout<<head1->val<<" ";
        head1=head1->next;
    }
}







void solve()
{
    IO
    ListNode*head=new ListNode(0);    
    ListNode*temp=head; 

    rep(i,0,10)
    {
        ListNode*n=new ListNode(i);
        if(i%2==0)
        {
            ListNode*n1=new ListNode(i);
            temp->next=n1;
        temp=temp->next;
        }
        temp->next=n;
        temp=temp->next;
    }

    unique(head);

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




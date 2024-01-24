#define ll             long long int
#define vll            vector<ll>
#define vss            vector<string>
#define vcc            vector<cc>
#define pll            pair<ll,ll>
#define mll            map<ll,ll>
#define msl            map<string,ll>
#define mcl            map<char,ll>
#define vpll           vector<pll>
#define sll            set<ll>
#define skip           continue
#define pb             push_back
#define ppb            pop_back
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define nai            cout<<-1<<endl
#define print(x)       cout<<x<<endl
#define nl             <<endl
#define sp             <<" "<<
#define spn            <<" "
#define fst            first
#define sec            second
#define loop(i, a, b)  for(i = a; i <= b; i++)
#define loop2(i, b, a) for(i = b; i >= a; i--)
#define MOD            1000000007
#define bit1(x)        __builtin_popcount(x)
#define vsob(x)        x.begin(), x.end()
#define vsort(x)       sort(vsob(x))
#define vreverse(x)    reverse(vsob(x))
#define asob(x)        x,x+n
#define asort(x)       sort(asob(x))
#define areverse(x)    reverse(asob(x))
#define vmax(a)        *max_element(vsob(a))
#define amax(a)        *max_element(asob(a))
#define vmin(a)        *min_element(vsob(a))
#define amin(a)        *min_element(asob(a))
#define vsum(a)        accumulate(a.begin(), a.end(), 0);
#define asum(a)        accumulate(a, a+n, 0);
#define lower(x,a)     lower_bound(x.begin(), x.end(), a)-x.begin()
#define upper(x,a)     upper_bound(x.begin(), x.end(), a)-x.begin()
#define minpq          priority_queue <ll, vector<ll>, greater<ll> >
#define inf            INT_MAX
#define gcd __gcd
#define fio ifstream fin; fin.open("input.txt"); ofstream fout; fout.open("output.txt");
#define ioclose fin.close(); fout.close();
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> //s.order_of_key  , *s.find_by_order
#include <bits/stdc++.h>
using namespace std;
ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}


void solve(){
    ll n,k=0,i,j,c=0,ans=0,mn=INT_MAX,mx=INT_MIN,sum=0,p,q;
    cin>>n>>q;
    ll pre;
    unordered_map<ll,ll>m;
    vector<ll>v,v1(q);
    for(i=0;i<n;i++){
        ll a,x;
        cin>>a>>x;
        if(c>=0){
            if(a==1){
                c++;
                v.pb(c);
                m[c]=x;
            }
            else
                x++;
                double pre= (c*x)/1000000000000000000.0;
                if(pre>1.0)
                    c=-1;
                else c= c*x;
            }
            //cout<<a sp x sp c nl;
        }
    }
//    for(i=0;i<v.size();i++){
//        cout<<i sp v[i] spn;
//    }
    //cout<<"last" nl;
    for(i=0;i<q;i++){
        cin>>v1[i];
//    }
//    for(i=0;i<q;i++){
        ll key = v1[i];
        ll key1 = key;
        //cout<<"key" sp key sp key1 sp m[key] nl;
        while(m[key]==0){
            ll lb = lower(v,key)-1;
            //cout<<"lb" sp lb nl;
            ll z = v[lb];
            if(key%z==0)key=z;
            else
            key = key%z;
            //cout<<"z" sp z sp key nl;
        }
        m[key1]=m[key];
        //cout<<"key1" sp m[key] sp m[key1] nl;
        cout<< m[key] spn;
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t1=1;
    cin>>t1;
    while(t1--){
        solve();
    }
    return 0;
}

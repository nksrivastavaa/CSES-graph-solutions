/*βοΈπβοΈπ½π΄π΄π»π°π±π· πΊππΌπ°π πππΈππ°πππ°ππ°βοΈπβοΈ*/
/*βοΈπβοΈπ½π΄π΄π»π°π±π· πΊππΌπ°π πππΈππ°πππ°ππ°βοΈπβοΈ*/

#include <bits/stdc++.h>
using namespace std;
                    
/*βοΈπβοΈπ³π° π³π΄π΅πΈπ½π΄πβοΈπβοΈ*/
/*βοΈπβοΈπ³π° π³π΄π΅πΈπ½π΄πβοΈπβοΈ*/

#define rep(i, j) for(int i = 0; i<j; i++)
#define rrep(i, j) for(int i = j-1; i>=0; i--)
#define sq(a) (a)*(a)
#define pb push_back
#define pob pop_back
#define fs first
#define sn second
#define mp make_pair
#define nl '\n'
#define midd(l, r) (l + (r - l) / 2)
#define all(a) a.begin(), a.end()
#define remVal(v, a) v.erase(remove(all(v), a), v.end())
#define maxe(v) *max_element(v.begin(), v.end())
#define maxi(v) max_element(v.begin(), v.end()) - v.begin()
#define mine(v) *min_element(v.begin(), v.end())
#define mini(v) min_element(v.begin(), v.end()) - v.begin()
#define modulo(a, b) (a % b < 0 ? a % b + b : a % b)
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long ll;
typedef unsigned long long ull;
typedef long double dll;
typedef pair<ll,ll> pl;
typedef pair<int, int> pi;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<pl> vpl;
typedef vector<pi> vpi;
typedef vector<vl> vvl;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef map<ll, ll> mapll;
typedef map<char, ll> mapcl;
typedef set<ll> setl;
typedef set<pl> setpl;
typedef set<pi> setpi;

/*βοΈπβοΈπ³π΄π±ππΆπΆπΈπ½πΆβοΈπβοΈ*/
/*βοΈπβοΈπ³π΄π±ππΆπΆπΈπ½πΆβοΈπβοΈ*/

#ifndef ONLINE_JUDGE
#define dbg(a) cerr << endl; cerr << #a << ": "; _print(a); cerr << endl << endl;
#else
#define dbg(a)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fs); cerr << ","; _print(p.sn); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> umap) {cerr << "{ "; for(auto i : umap) {cerr << "{";_print(i.fs); cerr << ", "; _print(i.sn); cerr << "} ";} cerr << "}";}
 
/*βοΈπβοΈπΌπ π΅ππ½π²ππΈπΎπ½πβοΈπβοΈ*/ 
/*βοΈπβοΈπΌπ π΅ππ½π²ππΈπΎπ½πβοΈπβοΈ*/ 

ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
void primeSieve(vb& sieve, int n) {sieve.assign(n + 1, true); sieve[0] = false; sieve[1] = false; for(int i = 2; i * i <= n; i++){if(sieve[i] == true){ for (int j = i * i; j <= n; j += i) { sieve[j] = false;}}}}
int* decToBinary(int n) {int* binaryNum = new int[32]; for(int i = 0; i<32; i++){binaryNum[i] = 0;} int i = 0; while(n > 0){binaryNum[i] = n % 2; n = n / 2; i++;} return binaryNum;}//RETURNS 32 BIT BINARY ARRAY POINTER. DO int *temp = decToBinary(n)

/*βοΈπβοΈπ²πΎπ½πππ°π½ππβοΈπβοΈ*/
/*βοΈπβοΈπ²πΎπ½πππ°π½ππβοΈπβοΈ*/

const ll inf = 1e18;
const ll ninf = inf*(-1);
const ll mod = 1e9 + 7;
const ll mod2 = 998244353;
const ll maxN = 2e5 + 5;
const ll maxM = 2e6 + 5;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/   
/*βοΈπβοΈππΎπ»ππ΄βοΈπβοΈ*/
/*βοΈπβοΈππΎπ»ππ΄βοΈπβοΈ*/

vector<vpl> adj;
vl dist;

void dijkstra(ll n) {
    dist[n] = 0;
    priority_queue<pl, vpl, greater<pl>> pq; //{dist, node}
    pq.push(mp(0, n));
    while(!pq.empty()){
        ll curr = pq.top().sn;
        ll d = pq.top().fs;
        pq.pop();
        if(d > dist[curr]) continue; //optimization: cause this d is useless & we dont need to relax other distances based on this.
        for(auto i: adj[curr]){
            if(dist[i.fs] > dist[curr] + i.sn){
                dist[i.fs] = dist[curr] + i.sn;
                pq.push(mp(dist[i.fs], i.fs));
            }
        }
    }
}

void solve() {
    ll n, m;
    cin>>n>>m;
    adj.assign(n+1, vpl());
    dist.assign(n+1, inf);
    rep(i, m){
        ll a, b, c;
        cin>>a>>b>>c;
        adj[a].pb(mp(b, c));
    }
    dbg(adj)
    dbg(dist)

    dijkstra(1);

    dbg(dist)

    for(int i = 1; i<=n; i++){
        cout<<dist[i]<<" ";
    }
    cout<<nl;
}


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
 
signed main() {
    FIO
    #ifndef ONLINE_JUDGE
	    freopen("input1.txt", "r", stdin);
	    freopen("output1.txt", "w", stdout); 
	    freopen("error1.txt", "w", stderr); 

    #endif
    ///////////////////////////////////////////////////////////////////////////////////////////

    
    ll t = 1;
    //cin >> t;
    // int k = t;
    while(t--) {
        // cout << "case #" << k - t << ":\n";
        solve();
    }



    ///////////////////////////////////////////////////////////////////////////////////////////
    #ifndef ONLINE_JUDGE
        cout << "\n________________\n" << ((float)clock()/CLOCKS_PER_SEC) << " seconds" << "\n";
    #endif
    return 0;
}

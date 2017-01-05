//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//using namespace std;
//#define FOR(i,a,b) for (long long i = (a); i <= (b); i++)
//#define FORD(i,a,b) for (long long i = (a); i >= (b); i--)
//#define REP(i,a) FOR(i,0,(long long)(a)-1)
//#define reset(a,b) memset(a,b,sizeof(a))
//#define BUG(x) cout << #x << " = " << x << endl
//#define PR(x,a,b) {cout << #x << " = "; FOR (_,a,b) cout << x[_] << ' '; cout << endl;}
//#define CON(x) {cout << #x << " = "; for(auto i:x) cout << i << ' '; cout << endl;}
//#define mod 1000000007
//#define pi acos(-1)
//#define eps 0.00000001
//#define pb push_back
//#define inf INT_MAX
//#define mp make_pair
//#define sqr(x) (x) * (x)
//#define ll long long
//#define _1 first
//#define _2 second
//
//int n,m,k;
//vector<int> gov;
//bool visit[1001];
//vector<vector<int>> g;
//int graph[1001][1001];
//ll res(0);
//int ma(-1);
//void dfs(int val,int it)
//{
//	g[it].pb(val);
//	visit[val] = true;
//	FOR(i,1,n)
//	{
//		if(!visit[i]&& graph[val][i] == 1)
//		{
//			dfs(i,it);
//		}
//	}
//}
//void aug(vector<int> v)
//{
//	int s = int(v.size());
//	ll ex(0);
//	REP(i,v.size())
//	{
//		REP(j,v.size())
//		{
//			if(graph[v[i]][v[j]] == 1)
//				ex++;
//		}
//	}
//	ex = ex/2;
//	res += s*(s-1)/2 - ex;
//	ma = max(s,ma);
//}
//
//int main() {
//  ios::sync_with_stdio(false);
//  cin >> n >>m>>k ;
//  ll temp(k);
//  while(temp--)
//  {
//	  int g;cin>>g;gov.pb(g);
//  }
//  g.resize(k);
//  while(m--)
//  {
//	  int u,v; cin>>u>>v;
//	  graph[u][v] = 1; graph[v][u] = 1;
//  }
//  int cnt(0);
//  REP(i,gov.size())
//  {
//	  dfs(gov[i],cnt);
//	  cnt++;
//  }
//  REP(i,g.size())
//  {
//      
//	  aug(g[i]);
//  }
//  vector<int> remain;
//  FOR(i,1,n)
//  {
//	  if(!visit[i])
//		  remain.pb(i);
//  }
//  ll ex(0);
//  ll s = ll(remain.size());
//  REP(i,remain.size())
//  {
//	  REP(j,remain.size())
//	  {
//		  if(graph[remain[i]][remain[j]] == 1)
//			ex++;
//	  }
//  }
//  
//  ex = ex/2; res += s*(s-1)/2 - ex;
//  res += s * ma;
//  cout<<res;
//
//}
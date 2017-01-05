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
//#define inf INT_MAX
//#define pb push_back
//#define mp make_pair
//#define sqr(x) (x) * (x)
//#define _1 first
//#define _2 second
//#define ll long long
//
//int n,m,T;
//int k(-1);
//vector<int> topo;
//vector<vector<pair<int,int>>> graph;
//int par[5020][5020];
//bool visit[5020];
//int cache[5020][5020];
//
//void dfs(int v)
//{
//	if(visit[v]) return;
//	visit[v] = true;
//	for(int i=0;i<graph[v].size();i++)
//	{
//		dfs(graph[v][i].first);
//	}
//	topo.pb(v);
//	return;
//}
//
//int main() {
//  ios::sync_with_stdio(false);
//  cin >> n >> m>>T;
//  graph.resize(n);
//  while(m--)
//  {
//	  int u,v,t;cin>>u>>v>>t;u--;v--;
//	  graph[u].pb(mp(v,t));
//  }
//  REP(i,n+1)
//  {
//	  REP(j,n+1)
//	  {
//		  cache[i][j] = inf;
//		  par[i][j] = -1;
//	  }
//  }
//  cache[0][1] = 0;
//  dfs(0); reverse(topo.begin(),topo.end());
//  for(int i=0;i<topo.size();i++)
//  {
//	  int v = topo[i];
//	  for(int j=0;j<n;j++)
//	  {
//		  if(cache[v][j] >= T) continue;
//		  for (int k = 0; k < (int)graph[v].size(); ++k) 
//		  {
//				int to = graph[v][k].first;
//				int cost = min(inf, cache[v][j] + graph[v][k].second);
//				if (cache[to][j + 1] > cost) 
//				{
//					cache[to][j + 1] = cost;
//					par[to][j + 1] = v;
//				}
//		  }
//	  }
//  }
//  vector <int> ans;	
//  int v = n - 1;	
//  int cnt = 0;	
//  for (int i = n; i >= 0; --i) 
//  {
//	  if (cache[v][i] <= T) 
//	  {
//		  cnt = i;
//		  break;
//	  }
//  }
//	while (v != -1) 
//	{
//		ans.push_back(v);
//		v = par[v][cnt];
//		--cnt;
//	}
//	cout << int(ans.size()) << '\n';
//	for (int i = (int)ans.size() - 1; i >= 0; --i)
//		cout << ans[i]  + 1 << " ";
//}
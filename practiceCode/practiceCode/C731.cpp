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
//int color[200020];
//int parent[200020];
//int r[200020];
//int n,m,k;
//string s;
//
//void makeSet()
//{
//	FOR(i,1,n) 
//	{
//		r[i] = 0;
//		parent[i] = i; 
//	}
//}
//
//int represent(int x)
//{
//	if(parent[x] != x)
//		parent[x] = represent(parent[x]);
//	return parent[x];
//}
//
//void merge(int x,int y)
//{
//	int xRoot = represent(x); int yRoot = represent(y);
//	if(r[xRoot] > r[yRoot])
//		parent[yRoot] = xRoot;
//	else
//	{
//		if(r[xRoot] == r[yRoot])
//		{
//			r[xRoot]++;parent[yRoot] = xRoot;
//		}
//		else
//			parent[xRoot] = yRoot;
//	}
//}
//
//int main() {
//  ios::sync_with_stdio(false);
//  cin >> n >> m>>k;
//  
//  FOR(i,1,n)
//  {
//	  int c;cin>>c; color[i]= c;
//  }
//  makeSet();
//  unordered_map<int,vector<int>> ma;
//  while(m--)
//  {
//	  int l,r;cin>>l>>r;
//	  merge(l,r);
//  }
//  int res(0);
//  FOR(i,1,n)
//  {
//	  ma[represent(i)].pb(i);
//  }
//  for(auto it = ma.begin();it!=ma.end();it++)
//  {
//	  unordered_map<int,int> f;
//	  set<int> temp;
//	  auto s = it->second;
//	  REP(i,s.size())
//	  {
//		  f[color[s[i]]]++;
//	  }
//	  int anchor(-1),c;
//	  for(auto it1 = f.begin();it1!=f.end();it1++)
//	  {
//		  if(it1->second > anchor)
//		  {
//			  anchor = it1->second; c = it1->first;
//		  }
//	  }
//	  for(auto it1 = f.begin();it1!=f.end();it1++)
//	  {
//		  if(it1->first != c)
//		  {
//			  res += it1->second;
//		  }
//	  }
//  }
//  cout<<res;
//
//}
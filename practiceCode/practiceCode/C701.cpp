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
//#define sqr(x) (x) * (x)
//#define _1 first
//#define _2 second
//
//int n;
//string s;
//char flat[1000001];
//
//int main() {
//  ios::sync_with_stdio(false);
//  cin >> n>>s;
//  unordered_map<char,int> m; unordered_set<char> se,k1;
//  int res(n);
//  int l(0),r(0);
//  REP(i,n)
//  {
//	  k1.insert(s[i]);
//  }
//  int k = int(k1.size());
//  while(l<n)
//  {
//	  while(int(se.size()) < k && r<n)
//	  {
//		  se.insert(s[r]);
//		  m[s[r]]++;r++;
//	  }
//	  if(int(se.size())==k)
//		res = min(r-l,res);
//	  if(m[s[l]]==1) se.erase(s[l]);
//	  m[s[l]]--;l++;
//  }
//  cout<<res;
//}
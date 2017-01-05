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
//int num;
//
//int main() {
//  ios::sync_with_stdio(false);
//  cin >> num;
//  int temp(num);
//  int h(0);
//  bool flag = true;
//  while(temp--)
//  {
//	  int t;string dir;
//	  cin>>t>>dir;
//	  if(h<0 || h > 20000)
//	  {
//		  flag = false;break;
//	  }
//	  if(h==20000) // at South	
//	  {
//		  if(dir != "North")
//		  {
//			  flag = false;
//			  break;
//		  }
//	  }
//	  if(h==0) // at North	
//	  {
//		  if(dir != "South")
//		  {
//			  flag = false;
//			  break;
//		  }
//	  }
//	
//	  if(dir=="North") h -= t;
//	  if(dir=="South") h += t;
//
//  }
//  if(flag && h== 0)
//	  cout<<"YES";
//  else
//	  cout<<"NO";
//}
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
//
//int main() {
//  ios::sync_with_stdio(false);
//  cin >> n;
//  int divori,score;
//  vector<int> div1,div2;
//  int sum(0);
//  int temp(n);
//  while(temp--)
//  {
//	  int c,d;
//	  cin>>c>>d;
//	  if(d==1)
//		  div1.push_back(sum);
//	  else
//		  div2.push_back(sum);
//	  sum += c;
//  }
//  if(div1.empty()) 
//	  {
//		  sort(div2.begin(),div2.end());
//		  cout<<1899 -div2[int(div2.size())-1]+sum;
//  }
//  else
//  {
//	  if(div2.empty()) cout<<"Infinity";
//	  else
//	  {
//		  sort(div1.begin(),div1.end()); sort(div2.begin(),div2.end());
//		  if(div2[int(div2.size())-1] >= div1[0])
//			  cout<<"Impossible";
//		  else
//		  {	 
//			  int res = 1899 - div2[int(div2.size())-1];
//			  cout<<res+sum;
//		 }
//	  }
//  }
//}
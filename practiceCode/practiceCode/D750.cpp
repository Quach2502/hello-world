//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <stack>
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
//#define ll long long
//bool grid[302][302];
//bool config[302][302][32][9];
//int depth[31];
//int n;
//ll sum(0);
//
//void recur(int temp,int x,int y,int state)
//{
//	if(temp != n && !config[x][y][temp][state])
//	{
//		config[x][y][temp][state] = true;
//		int expand = depth[temp] ;
//		if(state ==0)
//			{
//				FOR(i,1,expand)
//				{
//					y++;
//					if(!grid[x][y])
//					{
//						sum++; 
//						grid[x][y] = true;
//					}
//				}
//				recur(temp+1,x,y,1);
//				recur(temp+1,x,y,2);
//			}
//		if(state ==1)
//			{
//				FOR(i,1,expand)
//				{
//					x--;y++;
//					if(!grid[x][y])
//					{
//						sum++; 
//						grid[x][y] = true;
//					}
//				}
//				recur(temp+1,x,y,0);
//				recur(temp+1,x,y,3);
//			}
//		if(state ==2)
//			{
//				FOR(i,1,expand)
//				{
//					x++;y++;
//					if(!grid[x][y])
//					{
//						sum++; 
//						grid[x][y] = true;						
//					}
//				}
//				recur(temp+1,x,y,0);
//				recur(temp+1,x,y,4);
//			}
//		if(state ==3)
//			{
//				FOR(i,1,expand)
//				{
//					x--;
//					if(!grid[x][y])
//					{
//						sum++; 
//						grid[x][y] = true;						
//					}
//				}
//				recur(temp+1,x,y,1);
//				recur(temp+1,x,y,5);
//			}
//		if(state ==4)
//			{
//				FOR(i,1,expand)
//				{
//					x++;			
//					if(!grid[x][y])
//					{
//						sum++; 
//						grid[x][y] = true;						
//					}
//				}
//				recur(temp+1,x,y,2);
//				recur(temp+1,x,y,6);
//			}
//		if(state ==5)
//			{
//				FOR(i,1,expand)
//				{
//					x--;y--;
//					if(!grid[x][y])
//					{
//						sum++; 
//						grid[x][y] = true;						
//					}
//				}		
//				recur(temp+1,x,y,7);
//				recur(temp+1,x,y,3);
//			}
//		if(state ==6)
//			{
//				FOR(i,1,expand)
//				{
//					x++;y--;
//					if(!grid[x][y])
//					{
//						sum++; 
//						grid[x][y] = true;						
//					}
//				}
//				recur(temp+1,x,y,7);
//				recur(temp+1,x,y,4);
//			}
//		if(state ==7)
//			{
//				FOR(i,1,expand)
//				{
//					y--;
//					if(!grid[x][y])
//					{
//						sum++; 
//						grid[x][y] = true;						
//					}
//				}
//				recur(temp+1,x,y,5);
//				recur(temp+1,x,y,6);
//			}
//	}
//}
//
//int main() {
//  ios::sync_with_stdio(false);
//  cin >> n;
//  REP(i,n)
//  {
//	  int a;cin>>a;
//	  depth[i] = a;
//  }
//  recur(0,150,150,0);
//  cout<<sum;
//	
//  return 0;
//}
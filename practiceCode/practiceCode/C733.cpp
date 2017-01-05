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
//int n,k;
//string s;
//vector<int> ini,fin;
//
//void solve(vector<int> que,int compe)
//{
//	int i;
//	while(int(que.size()) != 1)
//	{
//		i = 0;
//		bool flag = true;
//		int pos = max_element(que.begin(),que.end())-que.begin();
//		if(pos == 0)
//		{
//			while(!(que[pos] > que[pos+1]))
//			{
//				pos++;
//			}
//			cout<<1+pos+compe<<" R\n";
//			que[pos+1] += que[pos];
//			que.erase(que.begin()+pos);
//		}
//		else
//		{
//			cout<<pos+1+compe<<" L\n";
//			que[pos-1]+= que[pos];
//			que.erase(que.begin()+pos);
//		}
//
//	}
//}
//
//int check(vector<int> v)
//{
//	int sum(0);
//	REP(i,v.size()) sum+= v[i];
//	return sum;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n;
//	int temp(n);
//	while(temp--)
//	{
//		int a;cin>>a;ini.pb(a);
//	}
//	cin>>k; temp = k;
//	while(temp--)
//	{
//		int a;cin>>a;fin.pb(a);
//	}
//	vector<pair<int,vector<int>>> v;
//	bool flag = true;int i(0),j(0);
//	while(i<n && j<k&& flag)
//	{
//		int sum(0);
//		vector<int> w;unordered_set<int> ws; 
//		while(sum<fin[j])
//		{
//			sum += ini[i]; w.push_back(ini[i]);ws.insert(ini[i]);
//			i++;
//		}
//		if(int(ws.size()) == 1)
//		{
//			if(int(w.size())!=1) flag = false;
//		}
//		if(sum != fin[j] || check(w) != fin[j]) flag = false;
//		v.pb(mp(fin[j],w));j++;
//	}
//	if(!flag || i != n || j != k)
//	{
//		cout<<"NO";
//	}
//	else
//	{
//		cout<<"YES\n";
//		REP(cnt,v.size())
//		{
//			solve(v[cnt].second,cnt);
//		}
//	}
//
//}
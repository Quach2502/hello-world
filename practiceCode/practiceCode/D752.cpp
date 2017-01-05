//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <queue>
//using namespace std;
//typedef long long ll;
//bool check(string x)
//{
//	int i(0),j(int(x.length()-1));
//	while(i<j)
//	{
//		if(x[i] != x[j])
//			return false;
//		i++;j--;
//	}
//	return true;
//
//}
//string reverse(string x)
//{
//	string r("");
//	for(int i = int(x.length()-1);i>=0;i--)
//	{
//		r += x[i];
//	}
//	return r;
//}
//	
//
//void main()
//{
//	ios::sync_with_stdio(false);
//	unordered_map<string, priority_queue<int>> notPal;
//	unordered_map<string, bool> checknotPal;
//	unordered_map<string, vector<int>> Pal;
//	int k,n(0);cin>>k>>n;
//	ll output(0);
//	while(k--)
//	{
//		string a;int s;cin>>a>>s;
//		if(!check(a))
//		{
//			checknotPal[a] = false;
//			notPal[a].push(s);
//		}
//		else
//		{
//			Pal[a].push_back(s);
//		}
//	}
//	for(auto i= notPal.begin();i!=notPal.end();i++)
//	{
//		string target = i->first;
//		if(!checknotPal[target])
//		{
//			checknotPal[target] = true;
//			string rev = reverse(target);
//			if(!notPal[rev].empty())
//			{
//				checknotPal[rev] = true;
//				auto qTarget = i->second; auto qRev = notPal[rev];
//				bool flag = true;
//				while(!qRev.empty() && !qTarget.empty() && flag)
//				{
//					int e = qRev.top() + qTarget.top();
//					if(e>0) 
//					{
//						output += e;
//						qRev.pop();qTarget.pop();
//					}
//					else flag = false;
//				}
//			}
//		}
//	}
//	vector<pair<ll,ll>> v;
//	for(auto i= Pal.begin();i!=Pal.end();i++)
//	{
//		ll sum(0);
//		int countofP(0);
//		int minPos(1000000), neg(-1000000);
//		auto sample = i->second;
//		ll center,side;
//		for(int j=0;j<sample.size();j++)
//		{
//			if(sample[j] >= 0)
//			{
//				countofP++;
//				minPos = min(minPos,sample[j]);
//				sum += sample[j];
//			}
//			else
//			{
//				neg = max(neg,sample[j]);
//			}
//		}
//		if(countofP!=0)
//		{
//			if(countofP%2==0)
//			{
//				side = sum;
//				if(neg !=-1000000)
//					center = max(sum-minPos,sum+neg);
//				else
//					center = sum - minPos;
//			}
//			else
//			{
//				center = sum;
//				if(neg !=-1000000)
//					side = max(sum-minPos,sum+neg);
//				else
//					side = sum - minPos;
//			}
//			v.push_back(make_pair(center,side));
//	
//		}
//	}
//	ll add(0);
//	for(int i =0;i<v.size();i++)
//	{
//		add += v[i].second;
//	}
//	ll temp(add);
//	for(int i =0;i<v.size();i++)
//	{
//		add = max(add,temp - v[i].second+v[i].first);
//	}
//	cout<<output+add;
//}
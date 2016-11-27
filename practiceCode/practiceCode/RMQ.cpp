//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//// Input: n - numbers (<= 1e5), element < 1e9, m - queries
//// Output: the min element between i and j indices for every query
//int input[100001];
//int st[200002];
//void construct(int ss,int se,int cur)
//{
//	if ( ss==se)
//	{
//		st[cur] = input[ss];
//		return;
//	}
//	int mid = (se-ss)/2 + ss;
//	construct(ss,mid,2*cur+1);
//	construct(mid+1,se,2*cur+2);
//	st[cur] = std::min(st[2*cur+1],st[2*cur+2]);
//
//}
//
//int query(int ss,int se, int cur,int qs,int qe)
//{
//	int mid = (se-ss)/2 + ss;
//	if(qs <= ss && qe >= se)
//		return st[cur];
//	if(qe < ss || qs > se)
//		return 1000000002;
//	return std::min(query(ss,mid,2*cur+1,qs,qe),query(mid+1,se,2*cur+2,qs,qe));
//}
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),m;std::cin>>n>>m;
//	int max = 1;
//	int output;
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input[i] = a;
//	}
//	construct(0,n-1,0);
//	for (int i = 0; i < m; i++)
//	{
//		int l,r;
//		std::cin >> l>>r;
//		std::cout<<query(0,n-1,0,l-1,r-1)<<'\n';
//	}
//	
//}
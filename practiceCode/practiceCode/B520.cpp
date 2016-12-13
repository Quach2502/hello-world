//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//struct node
//{
//	int val; int level;
//};
//
//int minops(int n, int m)
//{
//	std::unordered_set<int> s;
//	std::queue<node> q;
//	node start = {n,0}; q.push(start);
//	while(!q.empty())
//	{
//		node u = q.front(); q.pop();
//		if(u.val == m) return u.level;
//		s.insert(u.val);
//		if(u.val -1 == m || u.val *2 ==m) return u.level +1;
//		if(s.find(u.val *2) == s.end() &&(u.val < m))
//		{
//			start.val = u.val * 2;
//			start.level = u.level +1;
//			q.push(start);
//		}
//		if(s.find(u.val -1) == s.end() && (u.val-1 >= 0))
//		{
//			start.val = u.val -1;
//			start.level = u.level +1;
//			q.push(start);
//		}
//	}
//}
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),m;std::cin>>n>>m;
//	std::cout<<minops(n,m);
//	
//}
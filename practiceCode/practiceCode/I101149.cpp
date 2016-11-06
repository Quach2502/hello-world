//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <queue>
//typedef long long ll;
//bool visit[200001];
//std::vector<int> adj[200001];
//
//void main()
//{
//	int component(0);
//	std::vector<std::vector<int>> comp;
//	std::queue<int> queue;
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n,m;std::cin>>n>>m;
//	int smallest(1000000);
//	int anchor;
//	bool flag = false;
//	for (int i = 0; i < m; i++)
//	{
//		int a,b;
//		std::cin >> a>>b;
//		adj[a].push_back(b);
//		adj[b].push_back(a);
//	}
//	for(int i =1;i<=n;i++)
//	{
//		visit[i] = true;
//	}
//	for(int i=1;i<=n;i++)
//	{
//	    if(smallest > int(adj[i].size()))
//	    {
//	        smallest = int(adj[i].size());
//	        anchor = i;
//	    }
//	}
//	visit[anchor] = false;
//	for(int i=0;i<adj[anchor].size();i++)
//	    visit[adj[anchor][i]] = false;
//	if(m>0)
//	{
//	for(int i=1;i<= n;i++)
//	{
//		if(visit[i])
//			std::cout<<1<<" ";
//		else
//			std::cout<<0<<" ";
//	}
//	}
//	else
//	{
//		for(int i =1;i<n;i++)
//			std::cout<<1<<" ";
//		std::cout<<0;
//	}
//}
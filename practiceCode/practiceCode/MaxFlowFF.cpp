//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <queue>
//#include <unordered_set>
//#define V 6
//
////Find max flow, the source is always s and sink is always t 
//int cap[V+1][V+1];
//int parent[V + 1];
//typedef long long ll;
//void addEdge(int start,int end,int n)
//{
//	cap[start][end] = n;
//}
//bool bfs(int resG[V+1][V+1],int s,int t) // true if there is augment path, false if not
//{
//	bool visit[V + 1];
//	std::fill(visit, visit + V+1, false);
//	std::queue<int> q;
//	visit[s] = true;
//	parent[s] = -1;
//	q.push(s);
//	while (q.size() != 0)
//	{
//		int u = q.front();
//		q.pop();
//		for (int i = 1; i <= V; i++)
//		{
//			if (!visit[i] && resG[u][i] != 0)
//			{
//				visit[i] = true;
//				q.push(i);
//				parent[i] = u;
//			}
//		}
//	}
//	return visit[t];
//}
//
//int fordFulkerson(int s, int t)
//{
//	int u, v;
//	int resG[V + 1][V + 1] = {};
//	int max_flow = 0;
//	for (u = 1; u <= V; u++) // initiate residual graph
//		for (v = 1; v <= V; v++)
//			resG[u][v] = cap[u][v];
//	while (bfs(resG, s, t))
//	{
//		int path_flow = 1000000000;
//		for (v = t; v != s; v = parent[v])
//		{
//			u = parent[v];
//			path_flow = std::min(path_flow,resG[u][v] );
//		}
//		// update residual graph
//		for (v = t; v != s; v = parent[v])
//		{
//			u = parent[v];
//			resG[u][v] -= path_flow ;
//			resG[v][u] += path_flow;
//		}
//		max_flow += path_flow;
//	}
//	return max_flow;
//}
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int s, t,edge; std::cin >> s>>t>>edge;
//	for (int i = 0; i < edge; i++)
//	{
//		int start, end, c;
//		std::cin >> start >> end >> c;
//		addEdge(start, end, c);
//	}
//	int result = fordFulkerson(s, t);
//	std::cout << result;
//}
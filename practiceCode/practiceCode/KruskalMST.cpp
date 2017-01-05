//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <queue>
//#include <unordered_set>
//// Kruskal Algo for finding MST, max 1000 nodes
//// the algo using set
//// sort all the edge, pick from the smallest one such that no circle is made ( checked using DSU)
//// sample to check
////6 9
////1 2 1
////1 3 4
////1 4 3
////2 4 2
////2 3 4
////3 4 4
////4 5 4
////4 6 7
////5 6 5
//typedef long long ll;
//int rank[1001];
//int parent[1001];
//struct Edge
//{
//	int start,target;
//	int weight;
//};
//
//
//struct compareT
//{
//	bool operator()(const Edge l,const Edge r)
//	{
//		return l.weight > r.weight;
//	}
//};
//
//void makeSet(int n)
//{
//	for(int i=1;i<=n;i++)
//	{
//		parent[i] = i;
//		rank[i] = 0;
//	}	
//}
//
//int represent(int x)
//{
//	if (x != parent[x])
//       parent[x] = represent(parent[x]);
//    return parent[x];
//    
//}
//
//void merge(int x,int y)
//{
//	int xRoot = represent(x);
//	int yRoot = represent(y);
//	if(rank[xRoot] > rank[yRoot])
//	{
//		parent[yRoot] = xRoot;
//	}
//	else
//	{
//		if(rank[xRoot] == rank[yRoot])
//		{
//			rank[xRoot]++;
//			parent[yRoot] = xRoot;
//		}
//		else
//			parent[xRoot] = yRoot;
//	}
//}
//
//void main()
//{
//	std::priority_queue<Edge,std::vector<Edge>,compareT> q;
//	std::ios::sync_with_stdio(false);
//	std::vector<Edge> result;
//	int n(0),edges;std::cin>> n>>edges;// number of nodes and edges
//	makeSet(n);
//	while(edges--)
//	{
//		int x,y,w;std::cin>>x>>y>>w;
//		Edge temp;
//		temp.start = x;temp.target =y;temp.weight = w;
//		q.push(temp);
//	}
//	while(!q.empty())
//	{	
//		auto u = q.top();
//		q.pop();
//		if(represent(u.start) != represent(u.target))
//		{
//			result.push_back(u);
//			merge(u.start,u.target);
//		}
//	}
//	for(int j=0;j<result.size();j++)
//	{
//		std::cout<<"Weight: "<<result[j].weight<<" Start: "<<result[j].start<<" Target: "<<result[j].target<<'\n';
//	}
//}
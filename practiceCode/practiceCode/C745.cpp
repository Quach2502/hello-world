//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//int parent[1001];
//int rank[1001];
//int set[1001];
//bool gov[1001];
//int graph[1001][1001] ={};
//int find(int x)// find the representation of the set containing x
//{
//	if (parent[x] == x)
//		return x;
//	else
//	{
//		parent[x] = find(parent[x]);
//		return parent[x];
//	}
//}
//void makeSet(int size) // make all number a 1-element set
//{
//	for (int i = 1; i <= size; i++)
//	{
//		if (set[i] != -1)
//		{
//			parent[i] = i;
//			rank[i] = 0;
//		}
// 	}
//}
//
//void union_merge(int x, int y) // merge the set containing x and y
//{
//	int xRoot = find(x);
//	int yRoot = find(y);
//	if(!gov[xRoot] && !gov[yRoot])
//	{
//		if (rank[xRoot] == rank[yRoot])
//		{
//			parent[yRoot] = xRoot;
//			rank[xRoot]++;
//		}
//		else
//		{
//			if (rank[xRoot] > rank[yRoot])
//			{
//				parent[yRoot] = xRoot;
//			}
//			else
//			{
//				parent[xRoot] = yRoot;
//			}
//		}
//	}
//	else
//	{
//		if(gov[xRoot])
//		{
//			parent[yRoot] = xRoot;
//			if (rank[xRoot] == rank[yRoot])
//			{
//				rank[xRoot]++;
//			}
//			else
//			{
//				if (rank[xRoot] < rank[yRoot])
//				{
//					rank[xRoot] = rank[yRoot];
//				}
//			}
//		}
//		else
//		{
//			parent[xRoot] = yRoot;
//			if (rank[xRoot] == rank[yRoot])
//			{
//				rank[yRoot]++;
//			}
//			else
//			{
//				if (rank[yRoot] < rank[xRoot])
//				{
//					rank[yRoot] = rank[xRoot];
//				}
//			}
//		}
//	}
//}
//
//
//bool check(int x, int y) // check whether x and y are in the same set
//{
//	int xRoot = find(x);
//	int yRoot = find(y);
//	if (xRoot == yRoot)
//		return true;
//	else
//		return false;
//}
//
//void main()
//{
//	std::fill(gov,gov+1001,false);
//	std::ios::sync_with_stdio(false);
//	int n(0),m,k;std::cin>>n>>m>>k;
//	makeSet(n);
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			graph[i][j] = 0;
//		}
//	}
//	int output(0);
//	for(int i =0;i<k;i++)
//	{
//		int a; std::cin>>a;
//		gov[a] = true;
//	}
//	for(int i =0;i<m;i++)
//	{
//		int a,b; std::cin>>a>>b;
//		union_merge(a,b);
//		graph[a][b] = 1; graph[b][a] = 1;
//	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			if(graph[i][j] != 0)
//			{
//				if(find(i) == find(j))
//				{
//					union_merge(i,j);
//					graph[i][j] = 1;graph[j][i] = 1;
//					output++;
//				}
//				else
//				{
//					if(!(gov[find(i)] && gov[find(j)]))
//					{
//						union_merge(i,j);
//						graph[i][j] = 1;graph[j][i] = 1;
//						output++;
//					}
//				}
//			}
//		}
//	}
//	std::cout<<output;
//}
//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <map>
//#include <unordered_set>
//typedef long long ll;
//struct node
//{
//	int x;
//	int y;
//};
//struct compare
//{
//	bool operator()(const node a,const node b)
//	{
//		if (a.x != b.x) return a.x < b.x;
//		else return a.y < b.y;
//	}
//};
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::map<int, int> forx,fory;
//	std::map<node, int,compare> same;
//	int n(0);std::cin>>n;
//	for (int i = 0; i < n; i++)
//	{
//		int x,y;
//		std::cin >> x>>y;
//		node temp; temp.x = x;temp.y =y;
//		forx[x]++;
//		fory[y]++;
//		same[temp]++;
//	}
//	ll output(0);
//	for(auto i = forx.begin();i!=forx.end();i++)
//	{
//		int temp = i->second;
//		output += 1ll*temp*(temp-1)/2;
//	}
//	for(auto i = fory.begin();i!=fory.end();i++)
//	{
//		int temp = i->second;
//		output += 1ll*temp*(temp-1)/2;
//	}
//	for(auto i = same.begin();i!=same.end();i++)
//	{
//		int temp = i->second;
//		output -= 1ll*temp*(temp-1)/2;
//	}
//	std::cout<<output;
//}
//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <queue>
//#include <unordered_set>
//typedef long long ll;
//int app[2002] = {};
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),m;std::cin>>n>>m;
//	int maxofmin = n/m;
//	std::queue<int> fix;
//	std::vector<int> input;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		if(a > m)
//			{
//				app[2001]++;
//				input.push_back(a);
//			}
//		else
//		{
//			app[a]++;
//			input.push_back(a);
//		}
//	}
//	int temp(0);
//	for (int i = 1; i <= m; i++)
//	{
//		if(app[i] < maxofmin)
//		{
//			fix.push(i);
//			temp += maxofmin - app[i];
//		}
//	}
//	if(temp == 0)
//	{
//		std::cout<<maxofmin<<" "<<temp<<'\n';
//		for (int i = 0; i < n; i++)
//			std::cout<<input[i]<<" ";
//	}
//	else
//	{
//		while(!(fix.empty()))
//		{
//			int u = fix.front();
//			fix.pop();
//			while (app[u] < maxofmin)
//			{
//				for (int i = 0; i < n && app[u] < maxofmin; i++)
//				{
//					if (input[i] > m)
//					{
//						app[u]++; input[i] = u;
//						app[2001]--;
//					}
//					else
//					{
//						if (app[input[i]] > maxofmin && app[2001] == 0)
//						{
//							app[input[i]]--;
//							input[i] = u;
//							app[u]++;
//						}
//					}
//				}
//			}
//		}
//		std::cout<<maxofmin<<" "<<temp<<'\n';
//		for (int i = 0; i < n; i++)
//		{
//			if(input[i] != 2001)
//				std::cout<<input[i]<<" ";
//			else
//				std::cout<<1<<" ";
//		}
//	}
//}
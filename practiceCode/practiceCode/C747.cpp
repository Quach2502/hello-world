//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <queue>
//#include <unordered_set>
//typedef long long ll;
//struct mycompare
//{
//	bool operator()(const std::pair<int, int> &l, const std::pair<int, int> &r)
//	{
//		return l.first > r.first;
//	}
//};
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, mycompare> line;
//	int n(0), q; std::cin >> n >> q;
//	int max = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		line.push(std::make_pair(i,0));
//	}
//	for (int i = 0; i < q; i++)
//	{
//		int sum(0);
//		int t, k, d; std::cin >> t >> k >> d;
//		std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, mycompare> res;
//		std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, mycompare> original = line;
//		std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, mycompare> temp = line;
//		bool flag = true;
//		while (k  && !temp.empty())
//		{
//			auto u = temp.top();
//			if (u.second <= t)
//			{
//				line.pop();
//				res.push(std::make_pair(u.first,t+d));
//				sum += u.first;
//				temp.pop();
//				k--;
//			}
//			else
//			{
//				line.pop();
//				res.push(u);
//				temp.pop();
//			}
//		}
//		if (k >0)
//		{
//			line = original;
//			std::cout << -1;
//		}
//		else
//		{
//			while (!res.empty())
//			{
//				line.push(res.top());
//				res.pop();
//			}
//			std::cout << sum;
//		}
//		std::cout << '\n';
//	}
//
//}
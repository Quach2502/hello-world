//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <queue>
//typedef long long ll;
//int use[200001] = {};
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
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, mycompare> q;
//	int n(0), k; std::cin >> n >> k;
//	int output(0);
//	int winter(0);
//	//summer is 0,winter is 2;
//	bool flag = true;
//	int state = 0;
//	int start = 1;
//	int last(0);
//	std::vector<int> wd;
//	int first(0);
//	int temp(0);
//	int prev(0);
//	for (int i = 1; i <= n; i++)
//	{
//			int a;
//			std::cin >> a;
//			if (a < 0)
//			{
//				use[i] = 2;
//				winter++;
//				wd.push_back(i);
//				last = i;
//			}
//	}
//	if (winter == 0)
//	{
//		std::cout << 0;
//	}
//	else
//	{
//		for (int i = 0; i < wd.size() - 1; i++)
//		{
//			int check = wd[i + 1] - wd[i] - 1;
//			if (check != 0)
//			{
//				q.push(std::make_pair(check, wd[i]));
//			}
//		}
//		if (k < winter) std::cout << -1;
//		else
//		{
//			int ex = k - winter;
//			bool flag = true;
//			while (ex && !q.empty() && flag)
//			{
//				auto u = q.top();
//				q.pop();
//				if (ex >= u.first)
//				{
//					for (int i = u.second + 1; i <= u.second + u.first; i++)
//					{
//						use[i] = 2;
//					}
//					ex -= u.first;
//				}
//				else
//				{
//					flag = false;
//				}
//			}
//			if (ex >= n - last )
//			{
//				for (int i = last + 1; i <= n; i++) use[i] = 2;
//			}
//			for (int i = 0; i <= n - 1; i++)
//			{
//				if (use[i] != use[i + 1])
//					output++;
//			}
//			std::cout << output;
//		}
//	}
//}
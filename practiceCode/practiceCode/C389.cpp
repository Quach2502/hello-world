//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//std::vector<std::pair<int, bool>> w;
//
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0); std::cin >> n;
//	int pile(0);
//	std::vector<ll> input;
//	int output;
//	bool flag = true;
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		std::cin >> a;
//		w.push_back(std::make_pair(a, false));
//	}
//	std::sort(w.begin(), w.end());
//	int temp = n;
//	while (n > 0)
//	{
//		pile++;
//		int t(0);
//		int cur(-1);
//		for (int i = 0; i < temp; i++)
//		{
//			if (w[i].first >= t && !w[i].second)
//			{
//				t++;
//				n--;
//				w[i].second = true;
//			}
//
//		}
//	}
//	std::cout << pile;
//
//}
//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//
//std::vector<std::pair<int, int>> car;
//std::vector<int> gas;
//std::vector<int> DIST;
//std::vector<std::pair<int, int>> finalcar;
//bool check(int fuel,int t,int anchor)
//{
//	if (fuel < anchor)
//		return false;
//	int T(0);
//	for (int i = 0; i < DIST.size(); i++)
//	{
//		if (fuel < DIST[i])
//			return false;
//		else
//		{
//			int remain = fuel - DIST[i];
//			if (fuel > DIST[i] * 2)
//				T +=  DIST[i];
//			else
//				T += 3 * DIST[i] - fuel;
//		}
//	}
//	if (T <= t)
//		return true;
//	else
//		return false;
//}
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n,k,s,t;std::cin>>n>>k>>s>>t;
//	int output = 1000000001;
//	bool flag = false;
//	for (int i =1; i <= n; i++)
//	{
//		int c,v;
//		std::cin >> c>>v;
//		car.push_back(std::make_pair(c, v));
//	}
//	std::sort(car.begin(), car.end());
//	for (int i = 1; i <= k; i++)
//	{
//		int a;
//		std::cin >>a;
//		gas.push_back(a);
//	}
//	std::sort(gas.begin(), gas.end());
//	DIST.push_back(gas[0]);
//	int maxDIST = gas[0];
//	for (int i = 1; i < k; i++)
//	{
//		DIST.push_back(gas[i] - gas[i - 1]);
//		maxDIST = std::max(maxDIST, gas[i] - gas[i - 1]);
//	}
//	int max(0);
//	for (int i = 0; i < n; i++)
//	{
//		if (car[i].second > max)
//		{
//			max = car[i].second;
//			finalcar.push_back(car[i]);
//		}
//	}
//	DIST.push_back(s - gas[k-1]);
//	maxDIST = std::max(maxDIST, s - gas[k-1]);
//	int l = 0; int r = finalcar.size()-1;
//	while (l <= r)
//	{
//		int mid = (r + l) / 2;
//		if (check(finalcar[mid].second, t, maxDIST))
//		{
//			output = std::min(output,finalcar[mid].first);
//			r = mid - 1;
//		}
//		else
//			l = mid + 1;
//	}
//	if (output == 1000000001)
//		std::cout << -1;
//	else
//		std::cout << output;
//}
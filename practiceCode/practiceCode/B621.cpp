//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<int,int> dictA;
//	std::unordered_map<int, int> dictM;
//	ll n(0);std::cin>>n;
//	int max = 1;
//	std::vector<ll> input;
//	ll output(0);
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int x, y;
//		std::cin >> x >> y;
//		dictA[x + y]++;
//		dictM[x - y]++;
//	}
//	for (auto iterator = dictA.begin(); iterator != dictA.end(); iterator++)
//	{
//		output += iterator->second * (iterator->second - 1) / 2;
//	}
//	for (auto iterator = dictM.begin(); iterator != dictM.end(); iterator++)
//	{
//		output += iterator->second * (iterator->second - 1) / 2;
//	}
//	std::cout << output;
//}
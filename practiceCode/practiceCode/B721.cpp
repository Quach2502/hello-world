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
//	int store[101] = {};
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n,k;
//	int best(0), worst(0);
//	int max = 1;
//	std::string correct;
//	std::vector<std::string> input;
//	int output;
//	std::cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		std::string a;
//		std::cin >> a;
//		store[a.size()]++;
//	}
//	std::cin >> correct;
//	int loc = correct.size();
//	for (int i = 1; i < loc; i++)
//	{
//		if (store[i] == 0)
//			continue;
//		else
//		{
//			best += store[i];
//			worst += store[i];
//		}
//	}
//	int test = 5*(best / k);
//	best += test + 1;
//	worst += store[loc];
//	int test1 = 5 * (worst / k);
//	int temp = worst;
//	worst += test1;
//	if (temp % k == 0)
//		worst -=  5;
//	std::cout << best << " " << worst;
//}
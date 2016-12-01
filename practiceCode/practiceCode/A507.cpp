//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//
//
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int n(0), k; std::cin >> n >> k;
//	int sum(0);
//	std::vector<std::pair<int, int>> input;
//	std::vector<std::pair<int, int>> output;
//	bool flag = true;
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(std::make_pair(a, i));
//	}
//	std::sort(input.begin(), input.end());
//	int i(0);
//	while (i<n)
//	{
//		if (sum + input[i].first <= k)
//		{
//			sum += input[i].first;
//			output.push_back(input[i]);
//			i++;
//		}
//		else
//			break;
//	}
//	std::cout << int(output.size()) << '\n';
//	for (int j = 0; j< output.size(); j++)
//	{
//		std::cout << output[j].second << " ";
//	}
//}
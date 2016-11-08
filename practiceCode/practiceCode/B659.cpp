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
//	std::unordered_map<std::string, std::string> dict;
//	int n, m; std::cin >> n >> m;
//	int max = 1;
//	std::vector<std::pair<int,std::string>> input[10001];
//	int output;
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		std::string a;
//		int team, s;
//		std::cin >> a>>team>>s;
//		input[team].push_back(std::make_pair(s,a));
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		std::sort(input[i].begin(), input[i].end());
//		if (input[i].size() > 2)
//		{
//			if (input[i][input[i].size() - 3].first == input[i][input[i].size() - 2].first || input[i][input[i].size() - 3].first == input[i][input[i].size() - 1].first)
//				std::cout << "?\n";
//			else
//				std::cout << input[i][input[i].size() - 1].second << " " << input[i][input[i].size() - 2].second << '\n';
//		}
//		else
//			std::cout << input[i][input[i].size() - 1].second << " " << input[i][input[i].size() - 2].second << '\n';
//	}
//	
//}
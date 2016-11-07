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
//	char c('a');
//	int count(0);
//	int max = 1;
//	std::vector<ll> input;
//	int x(0), y(0);
//	int output(0);
//	bool flag = true;
//	while (c != '\n')
//	{
//		c = getchar();
//		if (c != '\n')
//		{
//			count++;
//			if (c == 'R')
//				x++;
//			if (c == 'L')
//				x--;
//			if (c == 'U')
//				y++;
//			if (c == 'D')
//				y--;
//		}
//	}
//	if (count % 2 == 1)
//		std::cout << -1;
//	else
//	{
//		int result = abs(x) + abs(y);
//		std::cout << result / 2;
//	}
//}
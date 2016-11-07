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
//	int x, y; std::cin >> x >> y;
//	int a(y),b(y),c(y);
//	std::vector<int> tri;
//	tri.push_back(y); tri.push_back(y); tri.push_back(y);
//	int count(0);
//	while (tri[0] != x || tri[1] != x || tri[2] != x)
//	{
//		count++;
//		int newS(0);
//		auto min = std::min_element(tri.begin(),tri.end());
//		for (auto i = tri.begin(); i != tri.end(); i++)
//		{
//			if (i == min)
//				continue;
//			else
//				newS += *i;
//		}
//		if(x < newS)
//			*min = x;
//		else
//			*min = newS - 1;
//	}
//	std::cout << count;
//}
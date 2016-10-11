//#include <iostream>
//#include <vector>
//#include <algorithm>
//void main()
//{
//	int number(0),s(0);
//	std::vector<std::pair<int,int>> stage;
//	std::cin >> s>>number;
//	int output = 0;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		int a,b;
//		std::cin >> a>>b;
//		stage.push_back(std::make_pair(a,b));
//	}
//	std::sort(stage.begin(), stage.end(), [](std::pair<int, int>a, std::pair<int, int>b) {return a.first < b.first; });
//	while (flag &&(stage.size()>0))
//	{
//		int j = 0;
//		for (int i = 0; i < stage.size(); i++)
//		{
//			if (s > stage[i].first)
//				j++;
//		}
//		if (j == 0)
//			flag = false;
//		else
//		{
//			std::sort(stage.begin(), stage.begin()+j, [](std::pair<int, int>a, std::pair<int, int>b) {return a.second > b.second; });
//			s += stage[0].second;
//			stage.erase(stage.begin());
//		}
//	}
//	if (flag)
//		std::cout << "YES";
//	else
//		std::cout << "NO";
//}	
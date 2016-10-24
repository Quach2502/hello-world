//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//typedef long long ll;
//std::vector<int> check;
//
//void main()
//{
//	int number(0);
//	std::string sen;
//	int max = 1;
//	std::vector<std::pair<int,int>> input;
//	std::getline (std::cin, sen);
//	std::cin >> number;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		int a,b;
//		std::cin >> a>>b;
//		input.push_back(std::make_pair(a,b));
//	}
//	check.push_back(0);
//	for (int i = 0; i <sen.size()-1; i++)
//	{
//		if (sen[i] == sen[i+1])
//			check.push_back(check[i]+1);
//		else
//			check.push_back(check[i]);
//	}
//	for ( int i =0;i < number;i++)
//	{
//		std::cout<< check[input[i].second-1]- check[input[i].first-1]<<std::endl;
//	}
//}

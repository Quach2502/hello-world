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
//	int n(0);std::cin>>n;
//	int min(1000000);
//	std::vector<int> input;
//	int output(0);
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//		min = std::min(min, a);
//	}
//	std::sort(input.begin(), input.end());
//	while (flag)
//	{
//		int temp = min;
//		flag = false;
//		for (int i = 0; i < n; i++)
//		{
//
//			if (input[i] % temp == 0) input[i] = temp;
//			else
//			{
//				flag = true;
//				input[i] = input[i] % temp;
//				min = std::min(min, input[i]);
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		output+= input[i];
//	}
//	std::cout << output;
//}
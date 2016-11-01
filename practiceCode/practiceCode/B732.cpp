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
//	int n(0),k(0);
//	int max = 1;
//	int dep(0);
//	std::vector<int> input;
//	std::vector<int> output;
//	std::cin >> n>>k;
//	bool flag = true;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//		output.push_back(input[i]);
//		if (input[i] + input[i + 1] < k)
//		{
//			dep += k - input[i] - input[i+1];
//			int incre = k - input[i + 1] - input[i];
//			input[i + 1] += incre;
//
//		}
//	}
//	output.push_back(input[n - 1]);
//	std::cout << dep << '\n';
//	for (int i = 0; i < n; i++)
//	{
//		std::cout << output[i] << " ";
//	}
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//std::vector<int> convert(int n, int type)
//{
//	std::vector<int> result;
//	while (n > 0)
//	{
//		result.push_back(n % 2);
//		n = n / 2;
//	}
//	for (int i = result.size(); i < type; i++)
//	{
//		result.push_back(0);
//	}
//	return result;
//}
//int check(std::vector<int> origin, std::vector<int> sample,int k,int type)
//{
//	int result(0);
//	for(int i = 0; i < type; i++)
//	{
//		if (origin[i] != sample[i])
//			result++;
//	}
//	if (result <= k)
//		return 1;
//	else
//		return 0;
//}
//void main()
//{
//	int type(0),player(0),k(0);
//	int max = 1;
//	std::vector<int> input;
//	int output(0);
//	std::cin >> type>>player>>k;
//	bool flag = true;
//	for (int i = 0; i < player+1; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	std::vector<int> fedor = convert(input[player],type);
//	for (int i = 0; i < player; i++)
//	{
//		output += check(fedor, convert(input[i],type),k,type);
//	}
//	std::cout << output;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//void main()
//{
//	int number(0),puzzle(0);
//	int max = 1;
//	std::vector<int> dif;
//	std::vector<int> input;
//	std::vector<int> solve;
//	std::cin >> number >> puzzle;
//	int output = 0;
//	bool flag = true;
//	for (int i = 0; i < puzzle; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	std::sort(input.begin(), input.end());
//	for (int i = 0; i < puzzle - 1; i++)
//	{
//		dif.push_back(input[i + 1] - input[i]);
//	}
//	for (int i = 0; i <= puzzle -number; i++)
//	{
//		int sum = 0;
//		for (int x = 0; x < number-1; x++)
//			sum += dif[x + i];
//		solve.push_back(sum);
//	}
//	std::cout << *std::min_element(solve.begin(),solve.end());
//}
//#include <iostream>
//#include <vector>
//#include<algorithm>
//void main()
//{
//	int number(0),k(0);
//	int max = 1;
//	int output(0);
//	std::vector<int> input;
//	std::cin >> number>>k;
//	bool flag = true;
//	int min = 5 - k;
//	for (int i = 0; i < number; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	std::sort(input.begin(), input.end());
//	if (input[number - 1] <= min)
//	{
//		output = number / 3;
//		std::cout << output;
//	}
//	else
//	{
//		int pos = std::find(input.begin(), input.end(), min + 1) - input.begin();
//		if (pos >= input.size())
//			std::cout << output;
//		else
//		{
//			output = pos / 3;
//			std::cout << output;
//		}
//	}
//}
//#include <iostream>
//#include <vector>
//void main()
//{
//	int number(0);
//	int max = 0;
//	int indicator1 = 0;
//	int indicator2 = 0;
//	std::vector<int> input;
//	std::vector<int> dif;
//	std::cin >> number;
//	int output = 1;
//	for (int i = 0; i < number; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	int min = input[0];
//	for (int i = 0; i < number ; i++)
//	{
//		if (min >= input[i])
//		{
//			min = input[i];
//			indicator2 = i;
//		}
//		if (max < input[i])
//		{
//			max = input[i];
//			indicator1 = i;
//		}
//	}
//	if (indicator1 == indicator2)
//	{
//		output = 0;
//	}
//	if (indicator1 < indicator2)
//	{
//		output = indicator1 + number - 1 - indicator2;
//	}
//	if (indicator1 > indicator2)
//	{
//		output = indicator1 + number -1 -(indicator2 + 1);
//	}
//	std::cout << output;
//}
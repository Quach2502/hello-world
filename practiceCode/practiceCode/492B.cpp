//#include <iostream>
//#include <vector>
//#include <algorithm>
//void main()
//{
//	int noLantern(0);
//	int	length(0);
//	int max = 1;
//	int condition_begin(0), condition_end(0);
//	std::vector<double> distance;
//	std::vector<int> input;
//	std::cin >> noLantern >> length;
//	input.push_back(length);
//	input.push_back(0);
//	int output = 1;
//	bool flag = true;
//	for (int i = 0; i < noLantern; i++)
//	{
//		int a;
//		std::cin >> a;
//		if (a == 0)
//			condition_begin = 1;
//		else
//		{
//			if (a == length)
//				condition_end = 1;
//			else
//				input.push_back(a);
//		}
//	}
//	std::sort(input.begin(), input.end());
//	for (int i = 2; i < noLantern - 1; i++)
//	{
//		distance.push_back((input[i] - input[i - 1]) / 2.0);
//	}
//	if (condition_begin == 0)
//		distance.push_back(input[1] - input[0]);
//	else
//		distance.push_back((input[1] - input[0])/2.0);
//	if (condition_end == 0)
//		distance.push_back(input[length-1] - input[length-2]);
//	else
//		distance.push_back((input[length - 1] - input[length - 2]) / 2.0);
//	std::cout << *std::max_element(distance.begin(), distance.end());
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//int augment(std::vector<int> &sample)
//{
//	int a = sample.back();
//	sample.pop_back();
//	return a;
//}
//void main()
//{
//	int number(0);
//	std::vector<int> input;
//	int sum(0);
//	std::cin >> number;
//	int output = 0;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		int a;
//		std::cin >> a;
//		sum += a;
//		input.push_back(a);
//	}
//	std::sort(input.begin(), input.end());
//	sum = sum / 2 + 1;
//	int mySum = 0;
//	while (mySum < sum)
//	{
//		mySum += augment(input);
//		output++;
//	}
//	std::cout << output;
//}
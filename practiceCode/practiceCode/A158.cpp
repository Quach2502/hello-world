//#include <iostream>
//#include <vector>
//void main()
//{
//	int number(0), place(0);
//	int max = 0;
//	std::vector<int> input;
//	std::cin >> number >> place;
//	int output = 0;
//	int same = 0;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	int i = place;
//	while (flag && i<number)
//	{
//		if (input[i] == input[place - 1])
//			same++;
//		else
//			flag = false;
//		i++;
//	}
//	i = 0;
//	flag = true;
//	while(flag && i<(place+same))
//	{
//		if (input[i] <= 0)
//		{
//			output = i;
//			flag = false;
//		}
//		i++;
//	}
//	if (flag)
//		output = place + same;
//	std::cout << output;
//}
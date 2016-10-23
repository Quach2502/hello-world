//#include <iostream>
//#include <vector>
//
//void main()
//{
//	int alphabet[26] = {};
//	int number(0);
//	int max = 1;
//	int count(0);
//	std::vector<char> input;
//	std::cin >> number;
//	int output = 1;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		char a;
//		std::cin >> a;
//		input.push_back(tolower(a));
//	}
//	if (number < 26)
//	{
//		std::cout << "NO";
//	}
//	else
//	{
//		for (int i = 0; i < number; i++)
//		{
//			if (alphabet[int(input[i]) - 97] == 0)
//			{
//				alphabet[int(input[i]) - 97]++;
//				count++;
//			}
//		}
//		if (count == 26)
//			std::cout << "YES";
//		else
//			std::cout << "NO";
//	}
//}
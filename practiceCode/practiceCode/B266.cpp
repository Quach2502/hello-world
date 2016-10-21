//#include <iostream>
//#include <vector>
//void main()
//{
//	int number(0),t(0);
//	int max = 1;
//	std::vector<char> input;
//	std::cin >> number >>t;
//	int output = 1;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		char a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	for (int j = 0; j < t; ++j)
//	{
//		int i = 0;
//		while (i < number - 1)
//		{
//			{
//				if (input[i] == 'G')
//					i++;
//				else
//				{
//					if (input[i + 1] == 'G')
//					{
//						input[i] = 'G';
//						input[i + 1] = 'B';
//						i+=2;
//					}
//					else
//						i++;
//				}
//			}
//		}
//	}
//	
//	
//	
//	
//	for (int i = 0; i < number; i++)
//	{
//		std::cout << input[i];
//	}
//}
//#include <iostream>
//#include <vector>
//#include<algorithm>
//#include <locale>  
//int score(char n)
//{
//	switch (n)
//	{
//	case 'Q':
//		return 9;
//	case 'K':
//		return 0;
//	case 'R':
//		return 5;
//	case 'N':
//		return 3;
//	case 'P':
//		return 1;
//	case 'B':
//		return 3;
//	default:
//		return 0;
//	}
//}
//void main()
//{
//	std::locale loc;
//	int number(8);
//	int max = 1;
//	int black(0), white(0);
//	std::vector<std::vector<char> > input;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			char a;
//			std::cin >> a;
//			if (std::isupper(a,loc))
//			{
//				white += score(a);
//			}
//			else
//			{
//				black += score(std::toupper(a,loc));
//			}
//		}
//	}
//	if (white > black)
//		std::cout << "White";
//	if (white < black)
//		std::cout << "Black";
//	if (white == black)
//		std::cout << "Draw";
//}
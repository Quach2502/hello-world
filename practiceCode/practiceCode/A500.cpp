//#include <iostream>
//#include <vector>
//void main()
//{
//	int number(0);
//	int max = 1;
//	int t(0);
//	int pos(1);
//	std::vector<int> input;
//	std::cin >> number>>t;
//	int output = 1;
//	bool flag = true;
//	for (int i = 0; i < number-1; i++)
//	{
//		int a;
//		std::cin >> a;
//		input.push_back(a);
//	}
//	while(flag && (pos != t))
//	{
//		if (pos + input[pos-1] <= t)
//		{
//			pos += input[pos - 1];
//		}
//		else
//			flag = false;
//	}
//	if (flag)
//		std::cout << "YES";
//	else
//		std::cout << "NO";
//}
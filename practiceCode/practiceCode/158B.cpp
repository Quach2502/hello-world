//#include <iostream>
//#include <vector>
//#include<algorithm>
//void countingSort(std::vector<int> &sample)
//{
//	std::vector<int> output1(sample.size());
//	int index[5] = {};
//	index[0] = -1;
//	for (int i = 0; i < sample.size(); i++)
//	{
//		index[sample[i]]++;
//	}
//	for (int i = 1; i < 5; i++)
//	{
//		index[i] += index[i - 1];
//	}
//	for (int i = sample.size()-1; i >-1; i--)
//	{
//		output1[index[sample[i]]] = sample[i];
//		index[sample[i]]--;
//	}
//	sample = output1;
//}
////void fill(std::vector<int> &taxi, int ppl)
////{
////	int i = 0;
////	bool flag = true;
////	while(flag && i < taxi.size())
////	{
////		if (ppl + taxi[i] <= 4)
////		{
////			taxi[i] = taxi[i] + ppl;
////			flag = false;
////		}
////		i++;
////	}
////	if (flag)
////	{
////		taxi.push_back(ppl);
////		output++;
////	}
////	taxi.erase(std::remove_if(taxi.begin(), taxi.end(), [] (int c){return c == 4; }), taxi.end());
////}
//void swap(std::vector<int> &sample, int i, int j)
//{
//	int temp = sample[i];
//	sample[i] = sample[j];
//	sample[j] = temp;
//}
//void quickSort(std::vector<int> &sample,int low,int high)
//{
//	if (low >= high)
//		return;
//	else
//	{
//		int i(low), j(high), k(low);
//		bool flag = true;
//		while (flag)
//		{
//			while (i <= high&& sample[i] <= sample[k] )
//				i++;
//			while (j >= low&&sample[j] > sample[k] )
//				j--;
//			if (i >= j)
//			{
//				flag = false;
//			}
//			else
//			{
//				swap(sample, i, j);
//			}
//		}
//		swap(sample, k, j);
//		quickSort(sample, low, j - 1);
//		quickSort(sample, j + 1, high);
//	}
//}
//void main()
//{
//	int output = 0;
//	int a1(0), a2(0), a3(0);
//	int number(0);
//	std::cin >> number;
//	int slot = 0;
//	for (int i = 0; i < number; i++)
//	{
//		int a;
//		std::cin >> a;
//		if (a == 1)a1++;
//		if (a == 2)a2++;
//		if (a == 3)a3++;
//		if(a==4) output++;
//	}
//	//quickSort(input, 0, input.size()-1);
//	//countingSort(input);
//	if (a3 >= a1)
//	{
//		output += a3;
//		if (a2 % 2 == 0)
//			output += a2 / 2;
//		else
//			output += a2 / 2 + 1;
//	}
//	else
//	{
//		output += a3;
//		a1 -= a3;
//		if ((2 * a2 + a1) % 4 == 0)
//			output += (2 * a2 + a1) / 4;
//		else
//			output += (2 * a2 + a1) / 4 + 1;
//	}
//	std::cout << output;
//}
//#include<set>
//#include <iostream>
//int arr[100005], cum[100005];
//void main()
//{
//    std::ios_base::sync_with_stdio(0);
//    int n, m;
//    std::cin >> n >> m;
//    for(int i=0;i<n;i++)
//        std::cin >> arr[i];
//    std::set<int> mys;
//    for(int i=n-1;i>=0;i--)
//    {
//        mys.insert(arr[i]);
//        cum[i] = mys.size();
//    }
//    while(m--)
//    {
//        int l;
//        std::cin >> l;
//        std::cout << cum[l-1] << '\n';
//    }
//}
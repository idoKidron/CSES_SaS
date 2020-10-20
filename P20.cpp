//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    // greedy algorithm
//    int n , x;
//    cin >> n >> x;
//    int arr[n];
//    for(int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//    int cou = 0;
//    int sum = 0;
//    int lastInd = 0;
//
//    for(int i=0; i<n; i++)
//    {
//        sum += arr[i];
//        while(sum > x)
//        {
//            sum -= arr[lastInd];
//            lastInd++;
//        }
//        if(sum == x)
//        {
//            cou++;
//        }
//    }
//
//    cout << cou;
//}

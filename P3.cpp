//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//typedef std::pair<int, bool> pairType;
//int main()
//{
//    // greedy algorithm
//    int n, x;
//    cin >> n >> x;
//    int weights[n];
//    for(int i = 0; i < n; i++)
//    {
//        cin >> weights[i];
//    }
//    sort(weights , weights + n);
//    int cou = 0, i = 0, j = n-1;
//    while(i < j)
//    {
//        cou++;
//        if(weights[i] + weights[j] > x)
//        {
//            j--;
//            continue;
//        }
//        else
//        {
//            i++;
//            j--;
//        }
//    }
//    if(i == j)
//    {
//        cou++;
//    }
//    cout << cou;
//
//}

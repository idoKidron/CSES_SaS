//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//    // greedy algorithm
//    int n, m, k;
//    cin >> n >> m >> k;
//    int renters[n];
//    int apartmants[m];
//    for(int i = 0; i < n; i++)
//    {
//        cin >> renters[i];
//    }
//    for(int i = 0; i < m; i++)
//    {
//        cin >> apartmants[i];
//    }
//    sort(renters, renters + n);
//    sort(apartmants, apartmants + m);
//
//    int cou = 0;
//    int j = 0;
//    bool flag;
//    for(int i=0; i < n; i++)
//    {
//        flag = false;
//        while(j < m && !flag)
//        {
//            if(apartmants[j] - k <= renters[i] && renters[i] <= apartmants[j] + k)
//            {
//                cou++;
//                flag = true;
//            }
//
//            if(renters[i] < apartmants[j] - k)
//            {
//                flag = true;
//            }
//            else
//            {
//                j++;
//            }
//        }
//    }
//    cout << cou;
//
//
//}

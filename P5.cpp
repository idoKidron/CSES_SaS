//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n, temp, temp2;
//    int* times = new int[1000000001];
//    for(int i=0; i < 1000000001; i++)
//    {
//        times[i] = 0;
//    }
//    cin >> n;
//    for(int i = 0; i < n; i++)
//    {
//        cin >> temp;
//        cin >> temp2;
//        for(int i = temp; i < temp2 + 1; i++)
//        {
//            times[i]++;
//        }
//    }
//    int m = 0;
//
//    for(int i = 0; i < 1000000001; i++)
//    {
//        if(times[i] > m)
//        {
//            m = times[i];
//        }
//    }
//    cout << m;
//}

//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    int cubes[n];
//    for(int i=0; i < n; i++)
//    {
//        cin >> cubes[i];
//    }
//    deque<int> towers;
//    towers.push_front(cubes[0]);
//    for(int i=1; i < n; i++)
//    {
//        if(cubes[i] >= towers[0])
//        {
//            towers.push_front(cubes[i]);
//        }
//        else
//        {
//            int j = 0;
//            while(towers[j] > cubes[i])
//            {
//                j++;
//            }
//            towers[j-1] = cubes[i];
//        }
//    }
//
//    cout << towers.size();
//
//}
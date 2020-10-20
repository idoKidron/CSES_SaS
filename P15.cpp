//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//typedef std::pair<int, int> pairType;
//
//int main()
//{
//    // greedy algorithm
//    int n, temp, temp2;
//    cin >> n;
//    vector<pairType> tasks;
//    for(int i = 0; i < n; i++)
//    {
//        cin >> temp;
//        cin >> temp2;
//        tasks.push_back(make_pair(temp, temp2));
//    }
//    sort(begin(tasks), end(tasks),
//         [](pairType& first, pairType& second)->bool { return first.first < second.first; });
//    long long time = 0;
//    long long sum = 0;
//    for(int i = 0; i < n; i++)
//    {
//        time += tasks[i].first;
//        sum += (tasks[i].second - time);
//    }
//
//    cout << sum;
//}

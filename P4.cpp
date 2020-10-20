//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <vector>
//
//using namespace std;
//typedef std::pair<int, bool> pairType;
//
//void searchTicket(int price, int left, int right, vector<pairType>& tickets)
//{
//    if(left == right || right == left + 1)
//    {
//        int i = left;
//        if(tickets[right].first <= price)
//        {
//            i = right;
//        }
//        if(tickets[i].first > price)
//        {
//            cout << -1 << endl;
//            return;
//        }
//        while(tickets[i].second)
//        {
//            i--;
//            if(i == -1)
//            {
//                cout << -1 << endl;
//                return;
//            }
//        }
//        cout << tickets[i].first << endl;
//        tickets[i].second = true;
//        return;
//    }
//    if(tickets[(left + right) / 2].first > price)
//    {
//        searchTicket(price, left, (left + right) / 2, tickets);
//        return;
//    }
//    else
//    {
//        searchTicket(price, (left + right) / 2, right, tickets);
//        return;
//    }
//}
//
//int main()
//{
//    int n, m, temp;
//    cin >> n >> m;
//    vector<pairType> tickets;
//    int customers[m];
//    for(int i=0; i < n; i++)
//    {
//        cin >> temp;
//        tickets.push_back(make_pair(temp, false));
//    }
//    for(int i=0; i < m; i++)
//    {
//        cin >> customers[i];
//    }
//
//    sort(begin(tickets), end(tickets),
//         [](pairType& first, pairType& second)->bool { return first.first < second.first; });
//
//    for(int i=0; i<m; i++)
//    {
//        searchTicket(customers[i], 0, n-1, tickets);
//    }
//}
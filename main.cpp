#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0)
    {
        vector<int>num;
        for (int i = 0; i<N; i++)
        {
            int tmp;
            cin >> tmp;
            num.push_back(tmp);
        }
        sort(num.begin(), num.end());
        for (int i = 0; i<N; i++)
        {
            cout << num[i] << " ";
        }
        cout << "\n";
    }
}

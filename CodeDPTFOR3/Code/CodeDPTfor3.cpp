#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dau = 0;
    int cuoi = 0;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int best = INT_MIN;
    for (int i = 0; i < n; i++) {//O(n)
        for (int j = i; j < n; j++) {//O(n)
            int sum = 0;
            for (int k = i; k <= j; k++) {//O(j+1)
                sum += arr[k];
            }
            if (best < sum)//O(1)
            {
                dau = i+1;//O(1)
                cuoi = j+1;//O(1)
                best = sum;//O(1)
            }
        }
    }
    cout << dau << "  " << cuoi << "  " << best;//O(1)
    //độ phức tạp là :O((n)(n)(j+1))
}

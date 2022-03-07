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
    int best = 0;
    for (int i = 0; i < n; i++) {//O(n)
        for (int j = i; j < n; j++) {//O(n)
            int sum = 0;
            for (int k = i; k <= j; k++) {
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
  
}

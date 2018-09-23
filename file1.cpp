#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int j = 1; j <= n; ++j) {
        sum += j;
    }

    cout << "Sum = " << sum;
    return 0;
}


#include <iostream>

using namespace std;

int proper_fraction(int n)
{
    int result = n;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
        {
            while (n % i == 0)  n /= i;
            result -= result / i;
        }
    if (n > 1)  result -= result / n;
    return 2*result;
}

int main()
{
    int usernum = 0;
    cin >> usernum;
    cout << proper_fraction(usernum);
    return 0;
}

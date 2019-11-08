#include <iostream>
#include <cmath>

using namespace std;

long int strange_multiply (long int num1, long int num2){
    if ((num1 == 0) || (num2 == 0)) return 0;
    bool is_negative = 1;
    if (((num1 > 0) && (num2 > 0)) || ((num1 < 0) && (num2 < 0))) is_negative = 0;
    num1 = abs (num1);
    num2 = abs (num2);
    long int result = 0;
	while (num2 > 0){
		if (num2 & 1) result += num1;
		num1 += num1;
		num2 = num2 >> 1;
	};
	if (!is_negative) return result;
	return -result;
};

int main()
{
    long int a = 0, b = 0;
    cin >> a >> b;
    cout << strange_multiply(a, b);
    return 0;
}

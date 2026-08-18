// Program for conversion of Decimal number to any base number of given choice

// E.g. 
// - if the base is 2, convert to Binary
// - If the base is 16, convert to Hexadecimal

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, base;
    string result = "";

    cout << "Enter decimal number: ";
    cin >> n;

    cout << "Enter base (2 to 16): ";
    cin >> base;

    if (base < 2 || base > 16) {
        cout << "Invalid base";
        return 0;
    }

    if (n == 0) {
        cout << "0";
        return 0;
    }

    while (n > 0) {
        int remainder = n % base;

        if (remainder < 10)
            result += char('0' + remainder);
        else
            result += char('A' + (remainder - 10));

        n = n / base;
    }

    reverse(result.begin(), result.end());

    cout << "Converted number: " << result;

    return 0;
}
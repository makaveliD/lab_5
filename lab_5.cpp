#include <iostream>

using namespace std;

int isPalindrome(int number)
{
    int reverse = 0;
    for (int i = number; i > 0; i /= 10)
    {
        reverse = reverse * 10 + i % 10;
    }

    return number == reverse;
}

int main()
{
    for (int i = 0; i <= 10000; i++)
    {
        if (isPalindrome(i)) {
            cout << i << endl;
        }
    }
}

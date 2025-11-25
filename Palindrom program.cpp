#include <iostream>
using namespace std;

int main()
 {
    int n, rev = 0, rem, temp;
    cout << "Enter number: ";
    cin >> n;
    temp = n;

    while (n != 0) 
	{
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
        cout << "It is a Palindrome number.";
    else
        cout << "It is not a Palindrome number.";

    return 0;
}

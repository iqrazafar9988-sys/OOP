#include <iostream>
using namespace std;

int main() 
{
    int n = 8;
    int e = 1, f = 1;

    cout << e << " " << f << " ";

    for(int i = 3; i <= n; i++)
	 {
        int next = e + f;
        cout << next << " ";
        e = f;
        f = next;
    }

    return 0;
}

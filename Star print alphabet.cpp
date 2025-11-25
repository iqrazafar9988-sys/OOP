#include <iostream>
using namespace std;

int main() 
{
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= 5; j++)
		 {
            if (j == 1 || j == 5 || i == 1 || i == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= 4; j++) 
		{
            if (j == 1 || (i == 1 || i == 3 || i == 5) && j < 4 || j == 4 && (i != 1 && i != 3 && i != 5))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= 5; j++) 
		{
            if (i == 1 || i == 5 || j == 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 4; j++) {
            if (j == 1 || j == 4 && (i != 1 && i != 5) || (i == 1 || i == 5) && j < 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++)
	 {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || i == 1 || i == 3 || i == 5)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    
    }
  cout<< endl;
  	
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || i == 1 || i == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || (i >= 3 && j == 5) || (i == 3 && j >= 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || j == 5 || i == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || j == 3 || (i == 5 && j <= 3) || (j == 1 && i >= 4))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;    
        
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || j == 6 - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || i == 5)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || j == 5 || (i == j && i <= 3) || (i + j == 6 && i <= 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || j == 5 || i == j)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if ((i == 1 || i == 5) && (j != 1 && j != 5) || (j == 1 || j == 5) && (i != 1 && i != 5))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout<<endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || i == 1 || (i == 3 && j < 5) || (j == 5 && i < 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if ((i == 1 || i == 5) && (j > 1 && j < 5) || (j == 1 && i > 1 && i < 5) ||
                (j == 5 && i > 1 && i < 5) || (i == j && i >= 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || (i == 1 || i == 3) && j < 5 || (j == 5 && i == 2) || (i - j == 2))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 3 || i == 5 || (j == 1 && i < 3) || (j == 5 && i > 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
     for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || j == 3)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout<<endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if ((j == 1 || j == 5) && i != 5 || (i == 5 && j > 1 && j < 5))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 9; j++) {
            if (j == i || j == 10 - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 9; j++) {
            if (j == 1 || j == 9 || (i == j && i >= 3) || (i + j == 10 && i >= 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == j || i + j == 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if ((i == j && i <= 3) || (i + j == 6 && i <= 3) || (j == 3 && i > 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || i + j == 6)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

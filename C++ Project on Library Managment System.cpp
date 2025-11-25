#include <iostream>
#include <fstream>
using namespace std;
const int maxbook=10; 
struct book      
	{
    string name;
	int id;
	string Author;
};
book books[maxbook];
int numbook=0;

void addbook()
{
	if (numbook==maxbook)
	{
		cout <<"Max no of books reached "<<endl;
	}
	cout<<"Enter book name: ";
	cin.ignore();    
	getline(cin,books[numbook].name);
	cout <<"Enter id ";
	cin >>books[numbook].id;
	cout <<"Enter Author ";
	cin>> books[numbook].Author;
	numbook++;
	cout <<"Book added sucessfully "<<endl;
}
	
void searchbook()
{
	int id;
	cout <<"enter id to search ";
	cin >>id;
	bool found =false;
	for (int i=0;i<numbook ;i++)
	{
		if (books[i].id==id)
{
			cout <<"\n book found "<<endl;
			cout <<"Name "<<books[i].name <<endl;
			cout <<"Id " <<books[i].id <<endl;
			cout <<"Author "<<books[i].Author <<endl;
			found=true;
			break;
		}
	}
	if (!found){
		cout <<"book not found "<<endl;
	}
}

int main()
 {
      int choice;
    do 
{
        cout << "\nLibrary Management System\n";
        cout << "Choice 1. Add book\n";
        cout << "Choice 2. Search book\n";
        cout << "Choice 3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
{
            case 1:
                addbook();
                break;
           case 2:
                searchbook();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 3);

    return 0;

}

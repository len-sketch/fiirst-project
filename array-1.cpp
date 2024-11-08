#include <iostream>

using namespace std;

int main()
{
    int data [5];
    int i;
    
    cout << "Masukkan Data :\n";
    for (i = 0; i < 5; i++)
    {
        cout << "Data ke - " << (i+1) << ":";
        cin >> data[i];
    }
    cout << "\nData yang telah Anda masukkan adalah : ";
    for (i = 0; i < 5; i++)
    {
        cout<<"\nData"<<(i+1)<<" = ";
        cout << data[i];
    }
    return 0;
    
}

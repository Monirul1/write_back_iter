//MD Monirul Islam
//Write array's backward iterartive function
#include <iostream>
#include <iomanip>

using namespace std;

const int size = 5;

void writebackward (int arr[], int i);

int main ()
{
    int arr[size] = { 32, 45, 67, 12, 89};
    int i;
    
    cout << "Numbers are: ";
    for (i = 0; i < size; ++i)
        cout << setw(5) << arr[i];
    cout << endl;
    
    cout << "Number is backward order: ";
    writebackward(arr, i);
    cout << endl;

    return 0;
}

void writebackward (int arr[], int i)
{
    for (i =(size-1); i >=0; --i)
        cout << setw(5) << arr[i];
}
#include <iostream>
using namespace std;






int main()
{

    int row_num, column_num;
    cout<<"Enter the number of rows of 2D array ";
    cin>>row_num;
    cout<<"Enter the number of columns of 2D array ";
    cin>>column_num;

    char* arr = new char[row_num * column_num];
    int c = 'a';
    // Traverse the 2D array
    for (int i = 0; i < row_num; i++) {
        for (int j = 0; j < column_num; j++) {
 
            // Assign values to
            // the memory block
            *(arr + i * column_num + j) = ++c;
        }
    }
 
    // Traverse the 2D array
    for (int i = 0; i < row_num; i++) {
        for (int j = 0; j < column_num; j++) {
 
            // Print values of the
            // memory block
            cout << *(arr + i * column_num + j)
                 << " ";
        }
        cout << endl;
    }

    
    return 0;
}
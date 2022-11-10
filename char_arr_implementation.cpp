#include <iostream>
using namespace std;
#define row 7
#define column 12






int main()
{

    char arr[row][column] = {
                             {'d','o','g','x','b','x','x','x','n','o','o','n'}
                            ,{'r','h','e','l','l','o','t','h','e','r','e','x'}
                            ,{'o','k','c','i','u','q','b','r','o','w','n','m'}
                            ,{'w','x','w','g','e','x','l','x','h','j','i','j'}
                            ,{'o','o','z','o','k','v','u','x','d','r','o','w'}
                            ,{'r','l','x','d','r','x','e','x','t','x','j','a'}
                            ,{'d','r','o','w','b','l','o','n','k','g','o','d'}
                            };

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // int row_num, column_num;
    // cout<<"Enter the number of rows of 2D array ";
    // cin>>row_num;
    // cout<<"Enter the number of columns of 2D array ";
    // cin>>column_num;

    // char* arr = new char[row_num * column_num];
    // int c = 'a';
    // // Traverse the 2D array
    // for (int i = 0; i < row_num; i++) {
    //     for (int j = 0; j < column_num; j++) {
 
    //         // Assign values to
    //         // the memory block
    //         *(arr + i * column_num + j) = ++c;
    //     }
    // }
 
    // // Traverse the 2D array
    // for (int i = 0; i < row_num; i++) {
    //     for (int j = 0; j < column_num; j++) {
 
    //         // Print values of the
    //         // memory block
    //         cout << *(arr + i * column_num + j)
    //              << " ";
    //     }
    //     cout << endl;
    // }

    
    return 0;
}
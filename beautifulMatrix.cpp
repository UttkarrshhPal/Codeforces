// #include<iostream>
// using namespace std;
// #define row 5
// #define col 5
// void rowswap(int arr[row][col])
// {
//      // swapping r1 to r2
//      int rA = 1;
//      int rB = 2;
//      for(int i = 1;i<=col;i++)
//      {
//         int temp = arr[rA][i];
//         arr[rA][i] = arr[rB][i];
//         arr[rB][i]=temp;
//      }
//      for(int i=0;i<row;i++)
//     {
//         for(int j =0;j<col;j++)
//         {
            
//             cout<<"\t"<<arr[i][j];
//         }
//         cout<<endl;
//     }

// }
// // void print(int arr[row][col])
// // {
    
// // }
// int main()
// {
//     // declare a 2d matrix
//     int n;
//     cin>>n;
//     int arr[n][n];
//     // let i = rows
//     // let j = columns
//     for(int i=0;i<n;i++)
//     {
//         for(int j =0;j<n;j++)
//         {
//             cout<<i<<" "<<j<<" :";
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     rowswap(arr);
//     cout<<endl;
//     // print(arr);
    
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//    int arr[5][5];
//    for(int i = 1;i<=5;i++)
//    {
//       for(int j = 1;j<=5;j++)
//       { 
//           cin>>arr[i][j];
//           if(arr[i][j]==1)
//           {
//             cout<<abs(3-i)+abs(3-j);
//           }
//       }
//    }
//    return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>a[i][j];
        }
    }

    int x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(a[i][j] == 1){
                x = i, y = j;
            }
        }
    }
    
    int dist = abs(x-2) + abs(y-2);
    cout<<dist<<endl;
    
    return 0;
}
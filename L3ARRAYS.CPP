#include<iostream>
using namespace std;

int searchtarget(int arr[][3],  int target){
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                if(target==arr[i][j]){
                    pair<int,int>temp;
                    temp.first=i;
                    temp.second=j;
                    return temp;
                }
            }
}
}

int main(){

/* 2D ARRAY CREATION */

// int arr[2][3] = {
//     {1, 2, 3},
//     {4, 5, 6}
// };


/* ACCESINNG 2D ARRAY */
// cout<<arr[0][0]; // 6
// cout<<arr[0][1]; // 6
// cout<<arr[0][2]; // 6
// cout<<arr[1][0]; // 6
// cout<<arr[1][1]; // 6
// cout<<arr[1][2]; // 6



/* Input & Output of 2D Array */
// int arr[2][3];
// for(int i = 0 ; i < 2 ; i++){
//     for(int j = 0 ; j < 3 ; j++){
//         cin>>arr[i][j];
//     }
    
// }

// for(int i = 0 ; i < 2 ; i++){
//     for(int j = 0 ; j < 3 ; j++){
//         cout<<arr[i][j]<<",";
//     }
//     cout<<endl;
// }

/* Traversl of 2D Array */
/* ROW TRAVERSL */
// int arr[2][3] = {
//     {1, 2, 3},
//     {4, 5, 6}
// };

// cout<<"/* ROW TRAVERSL */"<<endl;;
//  for(int i = 0 ; i < 2 ; i++){
//     for(int j = 0 ; j < 3 ; j++){
//         cout<<arr[i][j]<<",";
//     }
//     cout<<endl;
// }

// cout<<"/* COLUMN TRAVERSL */"<<endl;;
//  for(int i = 0 ; i < 3 ; i++){
//     for(int j = 0 ; j < 2 ; j++){
//         cout<<arr[j][i]<<",";
//     }
//     cout<<endl;
// }




// cout<<"/* ROW  TRAVERSAL SUM */"<<endl;

//  for(int i = 0 ; i < 3 ; i++){
//     int rowSum = 0;
//     for(int j = 0 ; j < 3 ; j++){
//        rowSum = rowSum+arr[i][j];
//     }
//     cout<<"Sum "<<i<<" : "<<rowSum<<endl;
// }



// cout<<"/* COL  TRAVERSAL SUM */"<<endl;

//  for(int i = 0 ; i < 3 ; i++){
//     int colSum = 0;
//     for(int j = 0 ; j < 3 ; j++){
//        colSum = colSum+arr[j][i];
//     }
//     cout<<"Sum "<<i<<" : "<<colSum<<endl;;


int arr[3][3] = {
    {10, 11, 12},
    {5, 6, 7},
    {9, 8, 2}
};

    return 0;
}
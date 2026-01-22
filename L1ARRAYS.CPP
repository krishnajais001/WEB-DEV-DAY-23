#include<iostream>
using namespace std;
/* Print array function*/
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

/* Print twice array function*/
void printTwice(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<2*arr[i]<<" ";/* Print twice array function*/
    }
}

/* Print Even or array function*/
void evenOdd(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i] %2 == 0){
            cout<<"Even ";
        }else{
             cout<<"Odd ";
        }
    }
}


int main(){

/* ARRAY -> its a ds which conatins similar kinds of items.
    Memory allocation is continuous
    index based
    static Array
*/

/* ARRAY CREATION */
// int arr[]; <- error
// int arr[5] ={1,2,3,4,5};
// int brr[] ={1,2,3,4,5};
    // int arr[5]={1};
//    int arr[5];
//     fill(arr, arr + 5, 10);


//     for(int x:arr){
//         cout<<x<<endl;
//     }

// indexing
// int arr[5] ={1,2,3,4,5};
// cout<<arr[0];
// cout<<arr[1];
// cout<<arr[2];
// cout<<arr[3];
// cout<<arr[4];  

/* TAKE INPUT IN ARRAY */
// int arr[5];
// for(int i=0;i<5;i++){
//     cin>>arr[i];
// }

/* TAKE INPUT IN ARRAY & PRINT THEM */
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }


/* TASK TAKE CHAR ARRAY PF 10 SIZE*/
// char arr[5];
// for(int i=0;i<5;i++){
//     cin>>arr[i];
// }

// /* TAKE INPUT IN ARRAY & PRINT THEM */
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }

/* Passing array to function*/
int arr[5] ={1,2,3,4,5};
 printArray(arr,5);
cout<<endl;

/* Print twice array function*/
//  printTwice(arr,5);

// cout<<endl;
/* Print Even or array function*/
 evenOdd(arr,5);







return 0;
}
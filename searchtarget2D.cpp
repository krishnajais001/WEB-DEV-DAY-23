#include<iostream>
using namespace std;


pair<int,int> searchtarget(int arr[][3],  int target){
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
     return {-1,-1};
}

int main(){

int arr[3][3] = {
    {10, 11, 12},
    {5, 6, 7},
    {9, 8, 2}
};

int target =7;
pair<int,int> result = searchtarget(arr,target);
cout<<"Target Found or Not :"<<result.first<<" "<<result.second;

   return 0;
}
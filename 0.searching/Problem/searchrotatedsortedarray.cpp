#include<bits/stdc++.h>
using namespace std;
int main(){

    // problem statement:-- Search the element in the rotated sorted array.


    //example:-- 
    // originl array -> [0,1,2,3,4,5,6,7]
    // rotated sorted array -> [3,4,5,6,7,0,1,2]



    // Brute force approach -> linear search.

    // optimised approach -> binary search.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[start]<=arr[mid]){
            if(arr[start]<=target && target<=arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && target<=arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}
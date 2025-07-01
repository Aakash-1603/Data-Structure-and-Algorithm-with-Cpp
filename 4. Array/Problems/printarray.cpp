#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"print array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 

    return 0;
    // The Time Complexity of this code is O(n) as it iterates through the array once.
    // The Space Complexity of this code is O(1) as it uses a fixed amount of space for the array.
}
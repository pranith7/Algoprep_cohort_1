#include <bits/stdc++.h>
using namespace std;

void reversepartofarray(vector<int> arr,int sp,int ep){
    while(sp<ep){
        swap(arr[sp],arr[ep]);
        sp++;
        ep--;
    }
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k>arr.size()) k = k%arr.size();
    reversepartofarray(arr,0,n-1); // whole array
    reversepartofarray(arr,0,k-1); // Initial segement of array
    reversepartofarray(arr,k,n-1); // Later Segment of array
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<"";
    }
    return 0;
}
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
    int n;
    cin>> n;
    int s,e;
    cin>>s,e;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversepartofarray(arr,s,e);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


}
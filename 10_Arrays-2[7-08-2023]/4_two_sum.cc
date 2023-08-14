#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr,int k){
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(|arr[i]+arr[j]| == k)  return true;
        }   
    }
    return false;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(arr,k);
    return 0;
}
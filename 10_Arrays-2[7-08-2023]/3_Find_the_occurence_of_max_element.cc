#include<bits/stdc++.h>
using namespace std;

int countgreater(vector<int> &arr){
    int max = INT_MIN;
    for (int i=1;i<arr.size();i++){
        if(arr[i]>max) max = arr[i];
    }
    int count = 0;
    for (int i=0;i<arr.size();i++){
        if(arr[i] == max) count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<countgreater(arr);
    return 0;
}
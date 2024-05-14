#include<bits/stdc++.h>
using namespace std;
int main(){
    int target;
    cout<<"enter Target Value : ";
    cin>>target;
    vector<int> arr{90,89,23,2,1,-1,-2};
    int n = arr.size();
    int lo = 0;
    int hi = n-1;
    int idx =-1;
    bool flag = true;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==target){
            idx = mid;
            flag = false;
            break;
        }
        else if(arr[mid]<target){
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }
    if(flag==true){
        cout<<"Not Find";
    }
    else{
        cout<<"Find"<<endl<<"Index number is : "<<idx<<endl;
    }
}
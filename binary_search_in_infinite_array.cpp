#include<bits/stdc++.h>
using namespace std;
void bs(int hi,int lo,vector<int> &arr,int tar){
    bool flag = false;
     while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==tar){
            cout<<"Index is : "<<mid<<endl;
            flag = true;
            break;
        }
        else if(arr[mid]<tar){
            lo = mid+1;
        }
        else hi = mid-1;
     }
     if(flag == false) cout<<"Invalid Index"<<endl;
}
int main(){
    vector<int> arr{1,2,3,5,7,8,9,10,100,1000,10000};
    int n = arr.size();
    int target;
    cout<<"enter number : ";
    cin>>target;
    int lo = 0;
    int hi =0;
    int x = 1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            cout<<"Valid Index "<<endl;
            cout<<"index is : "<<mid<<endl;
            flag = true;
            break;
        }
        else if(arr[mid]>target){
            hi = mid-1;
            bs(hi,lo,arr,target);
            flag = true;
            break;
        }
        else{
            lo = mid+1;
            hi = mid+x;
            x*=2;
        }
    }
 if(flag == false){
    cout<<"Invalid Input"<<endl;
 }
 return 0;
}
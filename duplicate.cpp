#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> arr{1,1,1,1,1,1,1,2,1,1,1,1};
     int n = arr.size();
     int lo = 0;
     int hi = n-1;
     bool flag = false;
     int target;
     cout<<"enter target value : ";
     cin>>target;
     while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            cout<<"Index is : "<<mid<<endl;
            flag = true;
            break;
        }
        if((arr[mid]==arr[lo] && (arr[mid]==arr[hi]))){
            hi--;
            lo++;
        }
        else if(arr[mid]<=arr[hi]){ // is mid-hi sorted
                if(target>=arr[mid] && target<=arr[hi]){
                    lo = mid+1;
                }
                else hi = mid-1;
            }
            else{
                if(target<=arr[mid] && target>=arr[lo]){
                    hi = mid-1;
                }
                else{
                    lo = mid+1;
                }
     }
}
if(flag==false) cout<<"Invalid input"<<endl;
     return 0;
}
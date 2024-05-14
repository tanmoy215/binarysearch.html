// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int> > arr{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//      int nr = arr.size();
//      int nc = arr[0].size();
//      int target;
//      cout<<"enter target value : ";
//      cin>>target;
//      int sr=0;
//      int sc = nc-1;
//      bool flag = false;
//      while((sc>00 && sc<nc) && (sr>=0 && sr<nr)){
//         if(arr[sr][sc]==target){
//             cout<<"Row number : "<<sr<<endl<<"Column number : "<<sc<<endl;
//             flag = true;
//             break;
//         }
//         else if(arr[sr][sc]>target){
//             sc--;
//         }
//         else{
//             sr++;
//         }
//      }
//      if(flag==false) cout<<"Invalid Input"<<endl;
//     return 0;
// }
//another process
//using single array
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<vector<int> > arr{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
     int m = arr.size();
     int n = arr[0].size();
     int lo = 0;
     int hi = n*m -1;
     int target;
     cout<<"enter target value : ";
     cin>>target;
     bool flag = false;
     while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        int row = mid/n;
        int col = mid%n;
        if(arr[row][col]==target){
            cout<<"col number : "<<col<<endl<<"row number : "<<row<<endl;
            flag = true;
            break;
        }
        else if(arr[row][col]>target) hi = mid-1;
        else lo = mid+1;
     }
     if(flag == false){
        cout<<"invalid Input"<<endl;
     }
     return 0;
}
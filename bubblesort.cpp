#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=1;i<n;i++) {
        
          bool t = false;
        
   
          for(int j=0;j<n-i;j++) {
               if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                     t = true;
               }
          }
        
        if(t == false) break;
    }
}

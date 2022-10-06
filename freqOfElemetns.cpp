





#include<unordered_map>
int highestFrequency(int arr[], int n) {
    // Write your code here
    
    unordered_map<int ,int> m;
    
    for(int i =0;i<n;i++) {
        
          m[arr[i]]++;
        
    }
    
    int key = 0;
    int value = 0;
    
    for(int i=0;i<n;i++) {
        
        if(m[arr[i]] > value) {
            
            key = arr[i];
            value =  m[arr[i]];
            
        }
        
    }
    
    return key;
    
    
}

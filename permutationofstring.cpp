class Solution {

    private:
     
     bool eq(int arr1[26], int arr2[26]) {
            
              for(int i=0;i<26;i++) {
                   if(arr1[i] !=arr2[i]) return 0;
              }
          return 1;

     }
public:
    bool checkInclusion(string s1, string s2) {
        int arr1[26] = {0};

        for(int i=0;i<s1.length();i++) {
              int index = s1[i] - 'a';
              arr1[index]++;
        }


        int window = s1.length();

        int arr2[26] = {0};
        int i=0;
        while(i < window && i<s2.length()) {

               int index = s2[i] - 'a';
               arr2[index]++;
               i++;
        }

        if(eq(arr1,arr2)) return 1;
        

            while(i < s2.length()) {

                  char newC = s2[i];
                  int index = newC - 'a';

                  arr2[index]++;

                  char old = s2[i-window];
                  index =  old - 'a';
                  arr2[index]--;

                  i++;

                  if(eq(arr1,arr2)) return 1;

            }

        return 0;



        


        
    }
};

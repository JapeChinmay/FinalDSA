

#include<iostream>

using namespace std;


int main() {

 

      int a[4][4];


      for(int i=0;i<4;i++) {
         for(int j=0;j<4;j++) {
              cin >> a[i][j];

         }
      }


      int rowStart = 0;
      int rowEnd = 4-1;
      int colStart = 0;
      int colend = 4-1;

      while(rowStart <= rowEnd && colStart <= colend) {

           
             //first row


             for(int col = colStart;col<=colend;col++) {
                  cout << a[rowStart][col] << " ";
             }

             rowStart++;

            // col s
             for(int row = rowStart;row<= rowEnd;row++) {
                 cout << a[row][colend] << " ";
             }

             colend--;

            for(int col = colend; col >= colStart;col--) {
                 cout << a[rowEnd][col] << " ";
            }

            rowEnd--;

            //colstart

            for(int row=rowEnd;row>=rowStart;row--) {
                 cout << a[row][colStart] << " ";
            }

            colStart++;


             
          
             
      }
}


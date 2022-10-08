#include<iostream>
using namespace std;


int isPresent(int arr[][3], int t, int row, int col) {
       for(int row = 0;row<4;row++) {
           for(int col =0;col < 3;col++) {
                if(arr[row][col] == t) return t;
           }
       }

    return 0;

}

void printSum(int arr[][3],int row, int col) {
     

     for(int row=0;row < 4;row++) {
          int sum = 0;
          for(int col = 0;col < 3;col++) {
              sum += arr[row][col];

          }

          cout << " sum of" << row << "th" << " " << "row" << " " << "is" << " " << sum << endl;

     }

     return;

}

void pritnWave(int arr[][4],int rowM,int colM) {



          for(int col=0;col< colM;col++) {

              if(col%2 != 0) {
                   for(int row =rowM-1;row>=0;row--) {
                     cout << arr[row][col] << " ";

                   }cout << endl;

              }else {
                   

                   for(int row =0;row<rowM;row++) {
                     cout << arr[row][col] << " ";
                     
                   }cout << endl;

              }
          }

          return;



}

int main() {



int arr[4][4];


    // int arr[4][3]  =  {{1,11,111},{2,22,222},{3,33,333},{4,44,444}};
    cout << "Enter array " << endl;
    

    for(int row = 0;row<4;row++) {
         for(int col =0;col<4;col++) {
              cin  >> arr[row][col];


         }cout << endl;

    }
    

    for(int row = 0;row<4;row++) {
         for(int col =0;col<4;col++) {
              cout << arr[row][col] << " ";

         }cout << endl;

    }

    // int t;
    // cin >> t;



    // cout << isPresent(arr,t,4,3);
    // printSum(arr,4,3);


    pritnWave(arr,4,4);





//       int a[3][4];

//     cout << "Enter array" << endl;

    
//       for(int i=0;i<3;i++) {
//           for(int j = 0;j<4;j++) {
//               cin >> a[i][j];

//           }
//       }


//       cout << endl;


    


//      cout << "ROW WISE" << endl;

    
//       for(int i=0;i<3;i++) {
//           for(int j = 0;j<4;j++) {
//               cout << a[i][j] << " ";

              
//           }cout << endl;

// }


//              cout << endl;

//              cout << "Enter col wise" << endl;


//       for(int j=0;j<4;j++) {
//           for(int i = 0;j<3;i++) {
//               cin >> a[i][j];

//           }
//       }


//       cout << " col wise" << endl;


//        for(int i=0;i<3;i++) {
//           for(int j = 0;j<4;j++) {
//               cout << a[i][j] <<" ";

//           }
//       }






}

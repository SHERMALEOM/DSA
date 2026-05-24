// #include <iostream>
// using namespace std;

// int main(){

//     int enter_rows;
//     cin>>enter_rows;

//     for(int row=1;row<=enter_rows;row++){

//      for(int col=1; col<=enter_rows-row;col++){
//         cout<<" ";
//      }

//      for(int col=1;col<=2*row-1;col++){
//         cout<<"*";
//      }
//        cout << endl;
//     }
//     return 0;
// }

// logic for reverse pyramid


//Logic for butterfly

// #include <iostream>
// using namespace std;

// int main(){
//     int total_no_of_rows;
//     cin>>total_no_of_rows;
//     // upper part  of the butterfly
//     for(int row=1;row<=total_no_of_rows;row++){
//         for(int col=1;col<=row;col++){
//             cout<<"*";
//         }
//         for(int col=1;col<=2*total_no_of_rows-2*row;col++){
//             cout<<" ";

//         }
//          for(int col=1;col<=row;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int row=1;row<=total_no_of_rows-1;row++){
//         for(int col=1;col<=total_no_of_rows-row;col++){
//             cout<<"*";
//         }
//          for(int col=1;col<=2*row;col++){
//             cout<<" ";
//         }
//          for(int col=1;col<=total_no_of_rows-row;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }



//     return 0;
// }

// reverse pyramid

// reverse the  number 

// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     cin>>num;  //264
//     int sum=0;
//     for(int i=1;i>sum;i++){
//         int digit =num%10;
//         num=num/10;
//         sum=sum*10+digit;
//     }
//     cout<<sum;
//     return 0;
// }


// reverse pyramid


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int row = 1; row <= n; row++){

        // spaces
        for(int col = 1; col <= row - 1; col++){
            cout << " ";
        }

        // stars (universal formula)
        for(int col = 1; col <= 2*(n - row) + 1; col++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
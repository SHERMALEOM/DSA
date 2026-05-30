// // Normal array printing 
// #include <iostream>
// using namespace std;

// int main(){
    
//     int arr[8]={1,5,8,98,45,87,45,49};
//     for (int  i = 0; i <8; i++)
//     {
//     cout<<arr[i]<<" ";
//     }
    
// }


// //  finding even no  from  the   array

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5]={12,13,16,15,54};
//     int even=0;
//     for(int i=0;i<=5;i++){  // dont make mistake in for loop  understand in the form of iteration how many  times have to perform
//         if(arr[i]%2==0){
//         even=arr[i];
//         cout<<even<<" ";
//         }
//     }
// }

// //  rotate the array

//  #include <iostream>
//  using namespace std;

// // we  have to  to make one array  and rotate them by position one 
// int main() {
//     // create an array
//     int arr[8]={12 , 23 ,78  , 54, 57, 78,98,26};
//     int last_digit=26;
//     for (int i = 6; i <=0; i--)
//     {
//        arr[i+1]=arr[i]; 
//     }
//     arr[0] = last_digit;

//     for (int i = 0; i < 8; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
    
//     return 0;
// }




// rotate number  by  giving the  input
#include <iostream>
using namespace std;

int main(){
  int   arr[8]={87 , 89,48 ,54,214, 77,11,55};
    int num;
    cin>>num;   //  here the num specifies the number of rotation w.r.t last digit 

    int last_digit=0;
    
    for (int i = 0; i < num; i++)
    {

       arr[0]=arr[num-1];
       


    }
    



}


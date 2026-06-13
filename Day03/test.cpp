// #include <iostream>
// using namespace std;
// // smallest numnber in an array

// int main() {
//     int arr[8]={45 ,98,45,54,1,0};
//     int smallest_num=arr[0];
//     for (int i = 1; i < 8; i++)
//     {
//         if (arr[i]<smallest_num)
//         {
//             smallest_num=arr[i];
//         }
        
//     }
//     cout<<smallest_num<<" ";

//     return 0;

// }


// //  greatest  number in an array
// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cin>>n;

//     long om[n]={98,56,12,54,2154,4545,584,14415,45145,54787};
    
//     long greatest_num=om[0];

//     for (long i = 0; i < n; i++)
//     {
//         if (om[i]>greatest_num)
//         {
//             greatest_num=om[i];        
//         }
        
//     }
    
//     cout<<greatest_num<<" ";


    
//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    
    int print_arr[5]={2,6,6,7,8};
    for (int i = 0; i <5; i++)
    {
        for (int j= 0; j< 5; j++)
        {
            cout<<print_arr[j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

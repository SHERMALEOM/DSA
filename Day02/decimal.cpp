// #include  <iostream>
// using namespace std;
 
// format specifier

// int main() {
    
//     int num;
//     cin>>num;
//     printf("number=%d",num);

//     return 0;
// }


// // decimal to binary

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cin>>num;
    
//     int binary;
//     int mul=1;
//     int sum=0;

//     while (num>0)
//     {
//          binary=num%2;
//          num=num/2;
//          sum=sum+binary*mul;
//          mul=mul*10;
//     }

//     cout<<sum<<" ";
    

    


//     return 0;
// }



// decimal to binary

#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    
    int decimal;
    int mul=1;
    int sum=0;

    while (num>0)
    {
         decimal=num%2;
         num=num/2;
         sum=sum+decimal*mul;
         mul=mul*2;
    }

    cout<<sum<<" ";
    

    


    return 0;
}


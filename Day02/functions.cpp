// // normal function call in c++
// #include <iostream>
// using namespace std;

//    int add(int num1,int num2){
//         return num1 + num2;
//    }

// int main() {

//     int soln=add(2,4);
//     cout<<soln;
//     return 0;
// }


#include <iostream>
using namespace std;

 int avgofnum(int num1 , int num2){
    int solution=(num1+num2)/2;
    cout<<solution<<endl;
    return 0;
 }

 int prime_num(int num){
    if(num%2==0)
    cout<<"Even";
    else
    cout<<"Odd"<<endl;

    return 0;
 }

 int  fibonacii(int number ){

   int first_num=0;
   int sec_num=1;
   int curr=0;

   for (int i = 0; i < number; i++)
   {
    curr=first_num+sec_num;
    first_num=sec_num;
    sec_num=curr;
   }
   
   
   cout<<first_num<<endl;
   return 0;
 }

int main() {
    int  num1 , num2;
    cin>>num1>>num2;

   avgofnum(num1,num2); 

   prime_num(num1);

   fibonacii(num1);

    return 0;
}
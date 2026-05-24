#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int sum=0;
    int mul=1;

    while(num){
        int digit=num%10;
        sum=sum+digit*mul;
        mul=mul*2;
        num=num/10;

    }
    cout<<sum;
return 0;
}
#include <iostream>
using namespace std;


int main() {
    
    int arr[6]={7 ,65 , 56 ,78 ,8,4};
    for (int i = 0; i < 6 ; i++)
    {
        for (int j = 0; j < 6-i; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}


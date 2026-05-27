#include <iostream>
using namespace std;
int main() {
    int num;
    cin>>num;

    for(int row=1;row<=num;row++){

        for (int space= 0; space <=num-row; space++)
        {
          cout<<" ";
        }
        
        for(int col=1;col<=2*row-1;col++){
            cout<<"*";
            
        }
        cout<<endl;
    }
    
    return 0;
}



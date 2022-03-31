#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int num, count=0;
   for(int i =0; i<SIZE;i++){
        cin>>num;
       if(num <0) count++;
   }
    cout<<count<<endl;

    return 0;
}

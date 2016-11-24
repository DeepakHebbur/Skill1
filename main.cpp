#include <iostream>
#include "addition.h"

using namespace std;

int main(int argc, char *argv[])
{
    addition add;
    int a1,b1,sum1;
    cout<<"enter the first number"<<endl;
    cin>>a1;
    add.SetA(a1);
    cout<<"enter the second number"<<endl;
    cin>>b1;
    add.SetB(b1);
    sum1 = add.ReturnSum();
    cout<<"sum is"<<sum1<<endl;
    return 0;
}

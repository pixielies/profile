#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number=";
    cin>>num;
    switch(num%2){
case 0:
    cout<<"number is even";
    break;
case 1:
    cout<<"number is odd";
    break;
    }
}

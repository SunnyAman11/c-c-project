#include<iostream>
using namespace std;
    #include<conio.h>
    int main(){
    int i=5;
   cout<<i<<"\n";
    int*p=&i;
    int**q=&p; 
    
    *p++;
    cout<<i<<"\n";

    return 0;
}

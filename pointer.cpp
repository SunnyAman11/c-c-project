#include<iostream>
using namespace std;
    #include<conio.h>
    int main(){
    int i=5;
    int*p=&i;
    int**q=&p; 
    (*q)++;
    *p++;
    cout<<i<<"\n";
    cout<<i<<"\n";
    char ch='a';
    int a=ch;
    cout<<p<<"\n"<<q;
    cout<<"\n"<<a;

    return 0;
}

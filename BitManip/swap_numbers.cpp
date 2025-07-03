#include<bits/stdc++.h>
using namespace std;

//swap numbers by XOR operator and here we dont use third variable

void swap(int &a , int &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Value of a is :- "<<a<<endl;
    cout<<"Value of b is :- "<<b<<endl;
    swap(a,b);
    cout<<"Value of a is :- "<<a<<endl;
    cout<<"Value of b is :- "<<b<<endl;


    return 0;
}
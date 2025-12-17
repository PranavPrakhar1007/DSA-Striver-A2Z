#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,HowManyCharacters;
    char character;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    int hash[256]={0};
    for(int i =0;i<n;i++)
    {
        hash[ch[i]]++;

    }
    cout<<"Enter how many characters u want info:- ";
    cin>>HowManyCharacters;
    while(HowManyCharacters--)
    {
        cin>>character;
        cout<<hash[character]<<endl;
    }

    return 0;
}
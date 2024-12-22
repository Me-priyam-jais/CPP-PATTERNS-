#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"How Many Number Of Lines Of Pattern you want to print";
cin>>n;
for(int i=0;i<n;i++)
{
for(int k=0;k<n-i-1;k++)
{
cout<<" ";
}
for(int j=0;j<i+1;j++)
{
cout<<(j+1);
}
for(int l=0;l<i;l++) //for(int l=i;l<0;l--) 
{                    //{
cout<<i-l;           //cout<<l;
}                    //}
cout<<"\n";
}
return 0;
}
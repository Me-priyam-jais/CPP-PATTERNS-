//
//                        for n=4
//                        AAAA
//                         BBB
//                          CC
//                           D
#include <iostream>
using namespace std;
int main()
{
int n;
char ch='A';
cout<<"How Many Number Of Lines Of Pattern you want to print";
cin>>n;
for(int i=0;i<n;i++)
{
for(int k=0;k<i;k++)
{
cout<<" ";
}
for(int j=0;j<n-i;j++)
{
cout<<ch;
}
cout<<"\n";
ch++;
}
return 0;
}
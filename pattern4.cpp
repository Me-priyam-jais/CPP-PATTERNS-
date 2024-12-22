#include <iostream>
using namespace std;
int main()
{
int n,number=1;
cout<<"how much lines you want to print ";
cin>>n;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<number<<" ";
number++;
}
cout<<"\n";
}
return 0;
}
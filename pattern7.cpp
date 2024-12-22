#include <iostream>
using namespace std;
int main()
{ 
int n;//,number=1; extra variable (i+1) can print the pattern
cout<<"How many lines you want in the pattern ";
cin>>n;
for(int i=0;i<n;i++)
{
for(int j=0;j<i+1;j++)
{
cout<<i+1<<" ";
}
cout<<"\n";
}
return 0;
}
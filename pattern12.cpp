#include <iostream>
using namespace std;
int main()
{
int n,number=1;
cout<<"How Many Number Of Lines Of Pattern you want to print";
cin>>n;
for(int i=0;i<n;i++)
{
for(int j=0;j<i+1;j++)
{
cout<<number<<" ";
number++;
}
cout<<endl;
}
return 0;
}
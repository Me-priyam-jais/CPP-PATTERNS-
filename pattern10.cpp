#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"How Many Number of lines you want to print ?";
cin>>n;
for(int i=0;i<n;i++)
{
for(int j=i+1;j>0;j--)
{ 
cout<<j<<" ";
} 
cout<<"\n"; 
}
return 0;

}
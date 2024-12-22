#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"How Many Number of lines you want to print ?";
cin>>n;
for(int i=0;i<n;i++)
{
char ch='A';
for(int j=i+1;j>0;j--)
{ 
cout<<(char)(ch+i)<<" ";
ch--;
} 
cout<<"\n"; 
}
return 0;

}
                           // Buttterfly pattern
                           // for n=4
                           // *      *
                           // **    **
                           // ***  ***
                           // ********
                           // ********
                           // ***  ***
                           // **    **
                           // *      *
#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"How Many Number Of Lines Of Pattern you want to print";
cin>>n;
for(int i=0;i<n;i++)
{
for(int stars=0;stars<i+1;stars++)
{
cout<<"*";
}
for(int spaces=0;spaces<2*n-2*(i+1);spaces++)
{
cout<<" ";
}
for(int stars=0;stars<i+1;stars++)
{
cout<<"*";
}
cout<<"\n";
}
for(int i=n;i>0;i--)
{
for(int stars=i;stars>0;stars--)
{
cout<<"*";
}
for(int spaces=2*n-2*i;spaces>0;spaces--)
{
cout<<" ";
}
for(int stars=i;stars>0;stars--)
{
cout<<"*";
}
cout<<"\n";
}
return 0;
}                          

                            //Hollow Diamond pattern
                            //for n=4
                            //   *  
                            //  * *
                            // *   *
                            //*     *
                            // *   *
                            //  * *
                            //   *


#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"How Many Number Of Lines Of Pattern you want to print";
cin>>n;
//upper n lines                                //   *
for(int i=0;i<n;i++)                           //  * *
{                                              // *   *      n=4
for(int space=0;space<n-1-i;space++)           //*     *
{
cout<<" ";
}
cout<<"*";
for(int space=0;space<(2*i-1);space++)
{
cout<<" ";
}
if(2*i-1>0)
{
cout<<"*";
}                                        
cout<<"\n";                                        
}
// lower n-1 lines                             // *   *
for(int line=n-1;line>0;line--)                //  * *        n=4
{                                              //   *
for(int space=n-line;space>0;space--)          
{
cout<<" ";
}
cout<<"*";
for(int space=2*(line+1)-5;space>0;space--)
{
cout<<" ";
}
if(line!=1)
{
cout<<"*";
}
cout<<"\n";
}
return 0;
}
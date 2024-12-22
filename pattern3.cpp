#include <iostream>
using namespace std;
int main()
{
int n,i,j;
cout<<"Till How Much Order You want to continue"; 
cin>>n;
/* pattern type:-
   A B C D _ _ _ _ _ _ _ _ _ _ _ n times * 
   A B C D _ _ _ _ _ _ _ _ _ _ _ n times * 
   A B C D _ _ _ _ _ _ _ _ _ _ _ n times * 
   A B C D _ _ _ _ _ _ _ _ _ _ _ n times * 
*/
for(i=1;i<=n;i++)
{
char ch='A'; 
for(j=1;j<=n;j++)
{
cout<<ch<<" ";
ch++;
}
cout<<"\n";
}
return 0;
}
#include <iostream>
using namespace std;
int main()
{
int n,i,j;
cout<<"Till How Much Order You want to continue"; 
cin>>n;
/* pattern type:-
   * * * * _ _ _ _ _ _ _ _ _ _ _ n times * 
   * * * * _ _ _ _ _ _ _ _ _ _ _ n times * 
   * * * * _ _ _ _ _ _ _ _ _ _ _ n times * 
   * * * * _ _ _ _ _ _ _ _ _ _ _ n times * 
*/
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
cout<<"* ";
}
cout<<"\n";
}
return 0;
}
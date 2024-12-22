#include <iostream>
using namespace std;
int main()
{
int n,i,j;
cout<<"Till How Much Order You want to continue"; 
cin>>n;
/* pattern type:-
   1 2 3 4 _ _ _ _ _ _ _ _ _ _ _ n 
   1 2 3 4 _ _ _ _ _ _ _ _ _ _ _ n
   1 2 3 4 _ _ _ _ _ _ _ _ _ _ _ n
   1 2 3 4 _ _ _ _ _ _ _ _ _ _ _ n
*/
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
cout<<j<<" ";
}
cout<<"\n";
}
return 0;
}
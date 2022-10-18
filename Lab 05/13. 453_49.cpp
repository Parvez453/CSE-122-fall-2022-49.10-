/**CODE NAME : Bear and Big Brother
CODE NO : 791A
**/
#include<iostream>
using namespace std;
main()
{
    int x,y,v=0;
    cin>>x>>y;
 while(x<=y)
    {
   x*=3;
    y*=2;
    v++;
    }
    cout<<v;
  return 0;

}

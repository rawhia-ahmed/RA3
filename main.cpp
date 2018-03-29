#include <iostream>

using namespace std;
void sw(int&,int&);
int y;
/*void sw(int&x,int&y){
    int z=0;
    z=x;
    x=y;
    y=z;

}*/
int main()
{
    int x=0;
     int y=0;
   cout<<"enter x & enter y";
   cin>>x>>y;
   sw(x,y);
      cout<<x<<y;

    return 0;
}
void sw(int&x,int&y){

    int z=0;

    z=x;
    x=y;
    y=z;

}




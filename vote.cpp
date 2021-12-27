#include <iostream>
using namespace std;

int main()
{
   int age;
   cout<<"Enter age if the user: ";
   cin>>age;
   if (age >= 18)
   {
     cout<<"\n User is eligible";
   }
   else
     cout<<"\n User is not eligible";
   return 0;
}

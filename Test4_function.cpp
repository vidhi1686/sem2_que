#include <iostream>
using namespace std;
int x = 5;
void update()
{
   static  int x = 5;
    x++;
    cout << x << endl;
}
int main()
{
    update();
    update ();
   
}
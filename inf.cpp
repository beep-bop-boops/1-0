#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;
int main()
{

 int zero, speed;
 speed = 200;


for(int i=1; i<=20000000000000000000; i++)
{
    /*
    for(int o=1; o<=8; o++)
    {
          cout << o;
          if(o = 1){cout << "" ;}
          else if(o = 2){cout << "hi 2";}
          else{cout << "rest";}
    else
        {
         cout << "1";
        }

    } 
    cout << "in //";
    }
    
    
    cout << "out // ";
/te
    */

   if(GetKeyState('W') & 0x8000/*Check if high-order bit is set (1 << 15)*/)
{
    
    speed = speed - 5;
   
    
}
   if(GetKeyState('Q') & 0x8000/*Check if high-order bit is set (1 << 15)*/)
{
    speed = speed + 5;
    
}

zero = (rand() %2 + 1) - 1;
 if(speed <= 0)
    {
        speed = 5;
    }

cout << zero;
/* debug
cout << endl;
cout << speed;
cout << endl;
*/
Sleep(speed);
}
return 0;

}
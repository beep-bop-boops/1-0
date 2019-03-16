#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;
int main()
{
 int zero, speed;
 speed = 200;

for(long i=1; i<=1000000000; i++)
{

if(GetKeyState('W') & 0x8000
    {
        speed = speed - 5;
    }

 if(GetKeyState('Q') & 0x8000
    {
        speed = speed + 5;
    }

zero = (rand() %2 + 1) - 1;
 
if(speed <= 0)
    {
        speed = 5;
    }

cout << zero;

Sleep(speed);
}

return 0;
}
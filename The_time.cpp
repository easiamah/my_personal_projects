#include <iostream>
# include <iomanip>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>


//#include <curses.h> 
# include <stdio.h>


//# include <cstdlib>
//# include <stdlib.h>

using namespace std;

int main ()
{

  cout << fixed << right;
  cout.fill('0');
  

  
  //std::cout << RED << "hello world" << endl;
  

  int user_hour, user_min, user_sec (01);
  int i;
 
 infinite_loop: 
do{
  cout << "What is the hour at the moment?" <<endl;
  cin >> user_hour;
  
  cout << "What is the minute at the moment?" <<endl;
  cin >> user_min; 

  /*cout << "What is the second at the moment?" <<endl;
  cin >> user_sec; */ 
  } while (( user_hour < 0) ||  (user_min < 0));


  for (int hours = user_hour; hours < 24; hours++)
  {
    for (int minutes = user_min; minutes < 60; minutes++)
    {
      for ( int seconds = user_sec; seconds < 60;seconds++)
      {
        cout << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << endl;
        sleep (1);       
       system ("clear");
      }
    }
  } 

      
      goto infinite_loop;
          
 


  
  
 return 0;
}

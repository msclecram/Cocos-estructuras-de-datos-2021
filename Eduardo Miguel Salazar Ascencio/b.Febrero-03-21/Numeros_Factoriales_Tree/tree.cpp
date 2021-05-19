#include <iostream>
using namespace std;

int main()
{
  //the with of the exmaple was 15, so we are going to use that
  int width  = 15;

  //we also calculate the center because it's a refrerence to the tree growth
  int center = width /2; 

  //We have to print lines of chars, so its better to use a forked for
  
  // "i" represents the current line we are in, we use the width as reference to how much line we shoud print
  //and its divided by half because (at least for now), I don't know how to perfectly center
  //any even number of "*" while keeping it astetically centered
  for (int i = 0; i < width / 2 +1; i++) 
  {
      //"j"" represents how much chars we are going to print in this line
      for (int j = 0; j < width; j++)
      {
          //curious enough, with each new line "i", two more "*" apperar in each side, closer to the center.
          //so, if the char we are about is near enough (or is) the center, 
          //and its index difference (compared to the center) is equal to the line we are in, it becomes a "*"
          if (center - i <= j && j <= center + i) //center - i <= j <= center + i, because its not python
          {
              cout << "*";
          }
          else //if it doesn't fit the range, its a blank space
          {
              cout << " ";
          }
      }
      //once we exit this for, we have to go to the next line
      cout << "\n";
      
  }
  
  return 0;
}
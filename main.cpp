// main.cpp file

/* CSCI 261 Final Project 2013
 *
 * Author: Alex Patel
 *
 * 
 *
 *
 *
 */

#include <iostream>  // "Computer, include the iostream library so I can use cin and cout."
#include <cstdlib>   // "Computer, include the standard library so my program isn't boring."
#include <string>    // "Computer, include the string library so I can use text longer than one character."

#include "../lib/graphics.h"  // "Also, please include the Borland Graphics Interface so I can draw pictures."
#include "Football.h"

using namespace std;  // We will almost always use the standard namespace.



int main( )
{
  
 

  Football footballObject;
  footballObject.drawField();


 

  // This line of code pauses the program until a key is pressed.
  // In this situation, we don't care about the actual key pressed,
  // we just want the window to stay open for us to admire.
  char ignore = (char)getch();

  // This signals the operating system that everything is ok.
  return EXIT_SUCCESS;
}


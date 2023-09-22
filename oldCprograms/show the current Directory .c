/* Program to show the current Directory */
#include<stdio.h>
#include<conio.h>
#include<dor.h>
#include<graphic.cpp>
extern initialize(char*);          		              	//External Function
int main(void)
    {
    	initialize(“get current directory”);		 //Initialize graphics
	 char buffer[MAXPATH];
	Getcwd(buffer,MAXPATH);		//Gets current working directory
	Printf(“The current directory is: %s\n”,buffer);
	Getch();
	Return 0;
     }

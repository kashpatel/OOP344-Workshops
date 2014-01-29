/* Kashyap Babubhai Patel
   Computer Programmer (CPD)
   Semester - 4 
   Seneca College of Applied Arts and Technology
   School of Information & Communication Technology 
   E-mail: kbpatel13@myseneca.ca */

//Workshop 1
//C++ Macro Version

#include <iostream>
#include <ctime>

#define N 1000000000

//Function-like Macros for ints and doubles
#define swap_i(x, y) int z; for(int i = 0; i < N; i++) { z = x; x = y; y = z; } 
#define swap_d(x, y) double t; for(int i = 0; i < N; i++) { t = x; x = y; y = t; } 


int main()	{
	std::cout << "File w1_macro.cpp" << std::endl;		//Declaration
	clock_t c0, c1, c2, c3;	
	int a = 2, b = 4;
	double c = 2.5, d = 4.5; 

	c0 = clock();		//start timer
	swap_i(a, b);
	c1 = clock();		//start another timer
	
	c2 = clock();
	swap_d(c, d);
	c3 = clock();
	
	//output printing. It uses difference between both timers to identify total seconds 
	std::cout << "Process time for ints     is " << (double)(c1-c0)/CLOCKS_PER_SEC << " secs" << std::endl;
	std::cout << "Process time for double   is " << (double)(c3-c2)/CLOCKS_PER_SEC << " secs" << std::endl;

	system("pause"); //prevent sudden execution end of program
	return 0;
}

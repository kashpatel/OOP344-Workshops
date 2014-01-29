/* Kashyap Babubhai Patel
   Computer Programmer (CPD)
   Semester - 4 
   Seneca College of Applied Arts and Technology
   School of Information & Communication Technology 
   E-mail: kbpatel13@myseneca.ca */

//Workshop 1
//C++ Function Version

#include <iostream>
#include <ctime>
#define N 1000000000

//Integer Swap Function
void swap_i() {
	int x = 2;
	int z, y = 4;
	for (int i = 0; i <= N; i++){
		z = x;
		x = y;
		y = x;
	}
}

//Double Swap Function
void swap_d() {
	double x = 2.5, z, y = 4.5;
	for (int i = 0; i <= N; i++){
		z = x;
		x = y;
		y = x;
	}
}

int main()	{
	std::cout << "File w1_cpp.cpp" << std::endl;	// Declaration
	clock_t c0, c1, c2, c3;					

	c0 = clock();	//start timer
	swap_i();
	c1 = clock();	//strt second timer
													//Processing Of both functions					
	c2 = clock();	//start timer
	swap_d();
	c3 = clock();	//start second timer
	
		//output printing. It uses difference between both timers to identify total seconds 
	std::cout << "Process time for ints     is " << (double)(c1-c0)/CLOCKS_PER_SEC << " secs" << std::endl;
	std::cout << "Process time for double   is " << (double)(c3-c2)/CLOCKS_PER_SEC << " secs" << std::endl;

	system("pause"); //prevent sudden execution end of program
	return 0;
}

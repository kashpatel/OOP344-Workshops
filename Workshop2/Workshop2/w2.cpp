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

void swap(void *a, void *b, int size) {
	char *temp = (char*) malloc (sizeof(char)* size);	//defining character of incoming size
	for (int i = 0; i <= N; i++) {
		memcpy(temp, a, size);		//memcpy copy bytes in memory
		memcpy(a, b, size);
		memcpy(b, temp, size);
	}
	free(temp);
}

int main()	{
	std::cout << "File w2_cpp.cpp" << std::endl;	// Declaration of variable
	clock_t c0 = 0, c1 = 0;					
	int a = 2, b = 4;
	double x = 2.2, y = 4.4;
	short c = 3, d = 4;
	unsigned long long v = 3.456, w = 2.345;

	c0 = clock();	//start timer
	std::cout << "Processing integer values, please wait..." << std::endl;	
	swap(&a, &b, 4);
	c1 = clock();	//strt second timer
	std::cout << "Process time for ints               is : " << (double)(c1-c0)/CLOCKS_PER_SEC << " secs" << std::endl;
	
	c0 = clock();	//start timer
	std::cout << "Processing double values, Please wait..." << std::endl;	
	swap(&x, &y, 8);
	c1 = clock();	//strt second timer 
	std::cout << "Process time for double             is :" << (double)(c1-c0)/CLOCKS_PER_SEC << " secs" << std::endl;

	c0 = clock();	//start timer
	std::cout << "Processing short values, Please wait..." << std::endl;	
	swap(&c, &d, 2);
	c1 = clock();	//strt second timer
	std::cout << "Process time for short              is :" << (double)(c1-c0)/CLOCKS_PER_SEC << " secs" << std::endl;

	c0 = clock();	//start timer
	std::cout << "Processing unsigned long long values, Please wait..." << std::endl;	
	swap(&v, &w, 8);
	c1 = clock();	//strt second timer
	std::cout << "Process time for unsigned long long is :" << (double)(c1-c0)/CLOCKS_PER_SEC << " secs" << std::endl;

	std::cout << "Completed Now..." << std::endl;	
	system("pause"); //prevent sudden execution end of program
	return 0;
}

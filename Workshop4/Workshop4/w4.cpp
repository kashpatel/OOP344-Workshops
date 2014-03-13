/* Kashyap Babubhai Patel								*/
/* Computer Programmer (CPD)							*/
/* Semester - 4											*/
/* Seneca College of Applied Arts and Technology		*/
/* School of Information & Communication Technology		*/
/* E-mail: kbpatel13@myseneca.ca						*/

// Workshop 4 - Callback Functions

#include <iostream>
using namespace std;

bool isEven(void* x, void* z) {
     int a = ((int)x);	 
	 int* b = ((int*)z);
	 if(a % 2 == 0) {
		 *b += a;
		 z = &b;
		 return true;
	 }
	 else {
		 return false;
	 }
 }
bool isPrime(void* x, void* z) {
	int a = ((int)x);	 
	int* b = ((int*)z);
	int count = 0;
	for(int i = 1; i <= a; i++) {
        if(a % i == 0) {
             count++;
        }
    }
    if(count == 2) {
		*b += a;
		z = &b;
		return true;
	}
    else {
		return false;
    }
 }
int sum(void* x, int n, int s, bool (*f)(void*, void*), void* y) {
		int total = 0;
		char *temp = (char*)x;
		for(int i = 0; i < n; i++) {
			if(f((void*)temp[s * i], y)) {
				total++;
			}
		}
	return total;
 }
 void display(const char* c, int* x, int f, int t, int n) {
     cout << f << ' ' << c << " found in {";
     for (int i = 0; i < n - 1; i++)
         cout << x[i] << ',';
     cout << x[n - 1] << "} sum is " << t << endl;
 }

 int main() {
     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
     int e = 0, p = 0, n;

     n = sum(a, 11, sizeof(int), isEven, &e);
     display("evens", a, n, e, 11);

     n = sum(a, 11, sizeof(int), isPrime, &p);
     display("primes", a, n, p, 11);
	 system("pause");
  }
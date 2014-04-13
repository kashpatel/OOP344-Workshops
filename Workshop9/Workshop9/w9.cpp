/* Kashyap Babubhai Patel								*/
/* Computer Programmer (CPD)							*/
/* Semester - 4											*/
/* Seneca College of Applied Arts and Technology		*/
/* School of Information & Communication Technology		*/
/* E-mail: kbpatel13@myseneca.ca						*/

//OOP344C
//Workshop 9

/* Bit Representation of an unsigned int  */
 #include <iostream>
 using namespace std;
 #include <limits.h>
 #include <bitset>

 //display function which display bits of unsigned int 
void displayBits(unsigned x) {
	 int t = 0;
	 std::bitset<CHAR_BIT * 4> temp (x);
	 int a = (CHAR_BIT * 4) - 1;
	 while(a >= 0) {
		cout << temp[a];
		t++; a--;
		if(t == 8) { cout << " "; t = 0; }
	 }
	 cout << std::endl;
}
int main(void) {

     displayBits(0);
     displayBits(1);
     displayBits(-1);
     displayBits(2000000000);
     displayBits(-2000000000);
     return 0;
}
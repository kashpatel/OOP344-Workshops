// Thing To Do List
 // Workshop 6
 // TTDList.cpp
 // Oct 31 2006

 #include "List.h"
#include <iostream>
using namespace std;
 int main() {
     List list(10, 20);

     list.add("Monday",  "Go to work");
     list.add("Tuesday", "Pay Credit Card");
     list.add("Friday", "Buy Motorcycle");
     list.add("Wednesday",  "Write Mid-term Test");
     list.display();

     list.remove();
     list.remove();
     list.display();
	 system("pause");
     return 0;
 }
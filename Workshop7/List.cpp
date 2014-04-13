/* Kashyap Babubhai Patel								*/
/* Computer Programmer (CPD)							*/
/* Semester - 4											*/
/* Seneca College of Applied Arts and Technology		*/
/* School of Information & Communication Technology		*/
/* E-mail: kbpatel13@myseneca.ca						*/

//List.cpp

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace  std;
#include "List.h"

//ToDo class
ToDo::ToDo(){}
ToDo::ToDo(const char* dat, const char* des) {
		strcpy(date, dat);
		strcpy(desc, des);	
}
void ToDo::display (int a, int t) const { 
	 std::cout << date;
	 for (int i = strlen(date); i < a; i++) {
         	std::cout << ' ';
         }
	 std::cout << desc;
	 for(int i = strlen(desc); i < t; i++) {
                std::cout << ' ';
         }	
   	 cout << endl;
}

//Node class
Node::Node() : next(NULL) {}
Node::Node(const char* dat, const char* desc, Node* tmp) : ToDo(dat, desc){
		next = tmp;
}

//List class
List::List() : head(NULL) {}
List::List(int w, int w1) {
	head = NULL;
	width_date = w; 
	width_desc = w1;
}
void List::add(const char* s1, const char* s2) {
	Node* temp = new Node(s1, s2, NULL);
	temp -> next = head;
	head = temp;
}
void List::remove() {
	if(head) {
		Node *h = head;
		head = head -> next;
		delete h;
	}
}						
void List::display() const {
	Node* ptr = head;
	while (ptr != NULL) {
		ptr -> display(width_date, width_desc);
		ptr = ptr->next;
	}
	std::cout << endl;
}

/* Kashyap Babubhai Patel								*/
/* Computer Programmer (CPD)							*/
/* Semester - 4											*/
/* Seneca College of Applied Arts and Technology		*/
/* School of Information & Communication Technology		*/
/* E-mail: kbpatel13@myseneca.ca						*/

//List.h

//ToDo class
class ToDo {
	char desc[30];
	char date[10];
public:
	ToDo();
	ToDo(const char*, const char*);
	void display (int a, int t) const;
};

//Node class
struct Node : public ToDo {
	Node* next;
public:
	Node();
	Node(const char*, const char*, Node* tmp);
};

//List class
class List : public Node {
	Node* head;
	int width_date, width_desc;
public: 
	List();
	List(int w, int h);
	void add(const char*, const char*);	//inserts a node at the head of the list. 
	void remove();						//removes the node at the head of the list. 
	void display() const;				//displays all of the things to do in the list on standard output in reverse order. 
};
/*   Kashyap Babubhai Patel									*/
/*   Computer Programmer (CPD)								*//*	 Semester - 4											*//*	 Seneca College of Applied Arts and Technology			*/
/*   School of Information & Communication Technology		*//*	 E-mail: kbpatel13@myseneca.ca							*/

//Workshop 3
//C++ Templates
//Array.h

template<class E = double>
class Array {										//class Array
		E* _storage;
		int _size;
		E _dummy;
	public:
		Array(int);									//One parameter Constructor
		Array<E>& operator=(const Array<E>&);		//= opeartor
		Array(const Array<E>&);						//copy constructor
		unsigned int size() const;					//returning size
		E& operator[](int i);						//an inline subscript operator that returns a reference to element i
		~Array();									//destructor
};

template<class T>									
Array<T>::Array(int s) {
	_size = s;										//Assigning variables
	_storage = new T[s];
}

template<class T>
Array<T>::Array(const Array<T>& src) {
	_storage = NULL;
	_size = 0;
	*this = src;									//calls assignment operator
}

template<class T>
unsigned int Array<T>::size() const {				//an inline query that returns the number of elements in the array.
	return _size;
}

template<class T>
T& Array<T>::operator[](int i) {					//returning value at specified array index
	if(i < 0 || i >= _size) {
		return _dummy;
	}
	return _storage[i];
}

template<class T>
Array<T>::~Array() {								//deleting array pointer from memory
	if(_storage) {
		delete[] _storage;
		_storage = NULL;
	}
	_size = 0;
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T>& src) {	
	if(this != &src) {
		if(_storage) delete[] _storage;
		_storage = new T[src._size];
		_size = src._size;
		for(int i = 0; i < _size; i++) {			//copying array values by for loop
			_storage[i] = src._storage[i];
		}
	}
	return *this;
}

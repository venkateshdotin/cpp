Pointer :

In C++, A pointer is a veriable that holds the address of another variable. To declare a pointer, we can use an asterisk between 
the data type and the variable name.

Synatx:
	Data_type *var-name;
	
E,g) int *ptr;

Dereference Operator(*)
-----------------------------
An Interesting property of pointers is that they can be used to access the variable they point to directl. This is done by preceding the
pointer name with the dereference operator(*). The Operator itself can be read as "value pointer to by".

NULL Pointers
-----------------------------
A null pointer is a pointer that point nowhere and not just an invalid address

* int *ptr1 = 0;
* int *ptr2 = NULL;

Void Pointers
--------------------------------
This is a special type of pointer available in C++ which represents the absence of type. Void pointers are pointers that point to a 
value that has no type (and thus also an undetermined length and undetermined dereferencing properties). This means that void pointers 
have great flexibility as they can point to any data type. There is a payoff for this flexibility. These pointers cannot be directly 
dereferenced. They have to be first transformed into some other pointer type that points to a concrete data type before being 
dereferenced. 


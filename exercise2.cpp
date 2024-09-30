/* Exercise 2 from "The C++ Programming Language", written by Stroustroup
 * Solution written by Andrew Pauls
 * Date: September 30, 2024
 * Solution written independently.
 */


/* Information regarding the problem at hand:
 * 	Working with DECLARATIONS
 * 	Declaration: An identifier in C++ cannot be used until it is declared.
 * 	The compiler must know the type of an identifier before it is used.
 *
 * 	ex: char ch;
 * 	    int count;
 * 	    int count = 1;
 * 	    struct thing { double d, dd; };
 * 	    extern complex sqrt(complex);
 * 	    extern int error;
 * 	    enum beer { Molson, Labatt };
 *
 * 	A declaration "introduces a name into a scope". 
 *
 * 	
 *
 * 	Assignment: For each of the following declarations, if it is not a 
 * 		definition, write a definition for it. It the declaration is
 * 		also a definition, write a declaration for it which is not a 
 * 		definition.
 *
 * 		DECLARATIONS:
 * 			{ char ch
 * 			  int count = 1;
 * 			  char* name = "Njal";
 * 			  struct complex { float re, im; };
 * 			  complex cvar;
 * 			  extern complex sqrt(complex);
 * 			  extern int error_number;
 * 			  typedef complex point;
 * 			  float real(complex* p) { return p->re; };
 * 			  const double pi = 3.1415926;
 * 			  struct user;
 * 			  template<class T> abs (T a) { return a<0 ? -a : a; }
 * 			  enum beer { Budlight, Coors, Stella };
 *
 */

#include <iostream>

int main()
{
	std::cout << "The declaration 'char ch' is strictly a declaration./n";
	std::cout << "A valid definition for it would be: char c = 'c'\n\n";
	std::cout << "The declaration 'int count = 1' is a definition.\n";
        std::cout << "A valid declaration for it would be: 'int count;'\n\n";
	std::cout << "The declaration 'char* name = \"Njal\" is a definition.\n";
	std::cout << "A valid declaration would be: 'char* name;'\n\n";
	std::cout << "The declaration 'struct complex { float re, im; }' is also a definition.\n";
	std::cout << "A valid declaration would be: 'struct complex'.\n\n";
	std::cout << "The declaration 'complex cvar' is a declaration'.\n";
	std::cout << "A valid definition would be: 'complex cvar = {11.0f, 11.0f}'.\n\n";
	std::cout << "The declaration 'extern complex sqrt(complex);' is not a definition.\n";
	std::cout << "A valid definition would be: complex sqrt(complex x) { return sqrt(x); }\n\n";
	std::cout << "The declaration 'extern int error_number' is a declaration.\n";
	std::cout << "A valid definition would be: 'extern int error_number = 1'\n\n";
	std::cout << "The declaration 'typedef complex point' is a definition.\n";
	std::cout << "A valid declaration only would be: 'struct complex'\n\n";
	std::cout << "The declaration 'float real(complex* P) { return p->re; };' is a definition.\n";
	std::cout << "A valid declaration only would be: 'float real(complex* p);\n\n";
	std::cout << "The declaration const double Pi = 3.14159 is a definition.\n";
	std::cout << "A valid declaration would be: const double Pi;\n\n";
	std::cout << "The declaration 'struct user;' is a declaration.\n";
	std::cout << "A valid definition would be: 'struct user = (\"Andrew\", 23, 1)'\n\n";
	std::cout << "The declaration template<class T> abs(T a) { return a<0 ? -a : a; } is a definition.\n";
	std::cout << "A valid declaration would be: 'template<class T> abs(T a)'\n\n";
	std::cout << "The declaration enum beer { Budlight, Coors, Stella } is a definition.\n";
	std::cout << "A valid declaration would be: enum beer;\n\n";
	std::cout << "And that is all of the cases I will look at in this exercise. Thank you for reading this output/file! Bye.\n";	
}

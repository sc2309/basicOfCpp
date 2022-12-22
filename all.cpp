/*#include <iostream>
using namespace std;

int main()
{
   cout << "welcome to the c++ world.";
   return 0;
}*/



/*#include <iostream>
int main()
{      
       std::cout << "Enter Two Numbers:" << std::endl;
       int n1 = 0, n2 = 0;
       std::cin >> n1 >> n2;
       std::cout << "The Sum Of " << n1 << " and " << n2 << " is " << n1 + n2 << std::endl;
       return 0;
}*/



/*#include <iostream>
int main()
{
	std::cout << " Enter Any Number: ";
	int n = 0;
	std::cin >> n;
	std::cout << " The Number Entered Is " << n;
	return 0;
}*/



/*#include <iostream>
using namespace std;
int main()
{
    cout << " Enter Any Number: ";
	int n = 0;
	cin >> n;
	cout << " The Number Entered Is " << n;
	return 0;
}*/



/*#include <iostream>
using std::cout;
using std::cin; //or using namespace std;
using std::endl;

int main()
{
	cout << " Enter Any Number: " << endl;
	int e = 0;
	cin >> e;
	cout << " The Number Entered Is " << e;
	return 0;
}*/



/*#include <iostream>
int main()
{
	int count = 1;
	while (count <= 100)
	    { std::cout << "Learning c++" <<std::endl;
	      count = count + 5;
	    }
	return 0;
}*/



/*#include <iostream>
int main()
{
	int count = 1, sum = 0;
	while(count <= 10)
	      { sum += count;
	        count = count + 1;
		  }
    std::cout << " The Sum Of 1 To 10 = " << sum <<std::endl;
    std::cout << "Work Is Done";
    return 0;
}*/



/*#include <iostream>
int main()
{
	int count = 1, sum = 0, val;
	std::cout << " Enter the number till which the sum has to be calculated ";
	std::cin >> val;
	while (count <= val)
	       { sum += count;
	         count = count + 1;
		   }
	std::cout << " Sum of 1 to " << val << " = " <<sum <<std::endl;
	return 0;
}
*/


/*#include <iostream>
int main()
{
    for (int i = 1; i<=10; i++);
           {std::cout << "hello there" << std::endl;
           }
    return 0;
}*/


/*#include <iostream>
int main() 
{
    int sum = 0;
    for (int i = 1; i<=10; i++)
    {sum += 1; //same as sum = sum +1    
    }
    std::cout << "sum of 1 to 10 = " <<sum <<std::endl;
    return 0;
}
*/


/*#include <iostream>
int main()
{
    int sum = 0, val;
    std::cout << "enter the number till which the sum has to be calculated";
    std::cin >> val;
    for(int i=1; i<=val; i++)
          {
            sum += i; //same as sum = sum +i
          }
    std::cout << "sum of 1 to "<<val <<" = " <<sum <<std::endl;
    return 0;
}
*/


/*#include <iostream>
int main()
{
    int sum = 0, value = 0;
    while (std::cin >> value)
           sum += value;
    std::cout << "sum = " << sum << std::endl
	;
    return 0;
}
*/


/*
#include <iostream>
int main()
{
    int lam = 0;
    std::cout << "Enter Any Number."<< std::endl;
    std::cin >> lam;
    if (lam < 5)
           {
            std::cout << "Ok Good Choise.";
           }
    else   {
            std::cout << "Not Good Choise.";
           }
    return 0;
}
*/

/*

#include <iostream>
int main()
{
    int lap = 0;
    std::cout << "enter any number."<< std::endl;
    std::cin >> lap;
    if (lap > 5)
           {
            std::cout << "nice.";
           }
    else if (lap < 5)
           {
            std::cout << "No.";
           }
    else   {
            std::cout << "equal.";
           }
    return 0;
}
*/

/*

#include <iostream>
int main()
{
    int choise = 0;
    std::cout << "Enter:" << std::endl << "1 - coffee." << std::endl << "2 - for tea." <<std::endl;
    std::cin >> choise;
    if (choise == 1)
            {
             std::cout << "Your coffee is on its way.Thank you";
            }
    else if (choise == 2)
            {
             std::cout << "Your tea is on its way. Thank you";
            }
    else    {
             std::cout << "No option by this number.";
            }
}
  */  
    
/*

#include <iostream>
int main()
{
    int tic = 0, val = 0;
    if(std::cin >>  tic)
    {
        int tac = 1;
        while (std::cin >> val)
        {
            if (val == tic)
                ++tac;
            else{
                std::cout << tic << " occurs " << tac << " times " << std::endl;
                tic = val;
                tac = 1;
            }
        }
        std::cout << tic << " occurs " << tac << " times " << std::endl;
    }
    return 0;
}
*/



/*#include <iostream>
using namespace std;


int main()
{
	unsigned int num = -1;
	int x = num;  
	cout << num << " , " << x;
	return 0;
}*/



    
    //RapidTables is the website to convert binary no. to decimal.
	// 8 bites = 1 byte ex. 10203040 is 8 bits
	//32 to 64 bits or 4 or 8 byte = word
	//iso latin 1 character set is another website for looking charcters
	



/*#include <iostream>
using namespace std;


int main()
{
	bool b = 35;// 1
	int i = b;//  1 or 0
	i = 3.14;// 3
	double pi = i;// 3
	unsigned char c = -1;
	//cout << pi << ".0";
	cout << c; // nothing printed which is only the answer "255".
	return 0;
}*/




/*#include <iostream>
using namespace std;


int main()
{
	// Decimal are normal representation like 25 just 25
	//integer literal that begin with 0(zero) are known as Octal ex. (011 group 1) (001 group 2) 011001 = 31 octal of 031 = 031 which is nothing but 25. 
	//binary equivalent of 25 = 11001 or 011001 1 zero can be added before it dosen't change value.
	// to convert 011001 to 031 we need to divide in equal group then convert it to decimal like if we convert 011 to decimal it is equal to 3 and 001 is equal to 1 hence, 031.
	// integer literalls that begin with either 0(zero)x or 0(zero)X are known as hexadecimal.
	// and in hexadecimal binary equivalent of 25 is (0001 group 2)(1001 group 2)converting this to decimal gives value 1 , 9 is hexadecimal it is written as 0x19 = 25 in 00011001 it is 11001 we just added three 0s in begining.
	int o,m,n;
	o = 25; 
	m = 031;
	n = 0x19;
	cout << o << endl << m << endl << n;
	return 0;
    	
}*/



/*#include <iostream>
using namespace std;


int main()
{
	//floating point literals include scientific notation which are E or e. ex. 3.14159E2 -> 3.141559 x 10 raised to the power 2 -> 314.159 or 3.141559 x 10 raised to the power -1 -> 0.314159.
    float o,m,n,p;
	o = 3.14159;
	m = 3.14159E2;
	n = 3.14159e3;
	p = 3.14159E-1;
	
	cout << o << endl << m << endl << n << endl << p;	
	
}*/



/*#include <iostream>
using namespace std;


int main()
{
	// A character enclosed within single quotes is a literal of type char. Zero or more character enclosed in double quotation marks is a string literal.
	// example : character literal  'a' and string literal  "Sarthak Chouksey.".
	// \o is the null character which is added at the end of the string literal.
	// \n new line , \t horizontal tab , \b backspace , \" double quote , \' single quote ,\\ backslash , \? question mark , \r curson return , \a alert (bell) 
	cout << "This is followed by a new line \n and after this I want a horizontal tab \t. Now here I want a backslash \\ and I want to write this word in \"double quote\" and this in \'single quote\'.Let us see if all this works correctly \? .Let us see if you can hear this \a " << endl;
	cout << "All worked correctly ";
	return 0;
}*/


/*#include <iostream>
using namespace std;


int main()
{
	// each variable has a type ---> determiners ---> the size and layout of the variable's memory. It has a range of values that can be stored within the memory. It will also tell us the set of operations that can be applied to the variable. 
    int num1;
    float num2,num3 ;
    int num4 = 1 ; 
    int num5,num6 = 2;
    cout << "num1 = " << num1 << " num2 = " << num2 << " num3 = " << num3 << " num4 = " << num4 << " num5 = " << num5 << " num6 = " << num6;
	return 0;
}*/


    // also remember:-
	// Identifiers can be composed to letters,digits and the underscore character. They are sequence that make up a name ex.a1,_b3 . The can only be started with letter or an underscore.  
	// they are case sensitive upper and lower case are distinct. c++ language mposes no limit on name length. The language reserves a set of names for its own use these names may not be used as identifers ex.cout .
	


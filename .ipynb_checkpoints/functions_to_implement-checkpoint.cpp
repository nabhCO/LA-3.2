#include <iostream>
#include <vector>
#include <string>

/*Function implementation file for LA 3.2*
nabh6611*/

/* String functions section */

// Splits a single string on separator into a vector of strings
std::vector<std::string> Split(std::string whole, std::string separator);
			

// takes two strings and returns a new string that is the result of removing all occurrences of s2 from s1.
std::string RemoveAllSubstrings(std::string s1, std::string s2){

	if (s2 == ""){   //if the substring is empty, return the original string without modifying

		return s1;
	}

	int len2 = s2.length();
	size_t str_start = s1.find(s2);   //find starting idx of first substring instance

	while (str_start != std::string::npos) { //if substring not found, npos returned- exit loop if this happens

		//remove substring  instance from s1, use find again to get idx of next instance
		s1.erase(str_start, len2);
		str_start = s1.find(s2);
	}

	//return modified s1
	return s1;

}



// takes two strings and returns a new string that is the result of removing the first occurrence of s2 from s1.
std::string RemoveFirstSubstring(std::string s1, std::string s2) {

	if (s2 == ""){  //if the substring is empty, return the original string without modifying

		return s1;
	}

	int len2 = s2.length();

	size_t str_start = s1.find(s2); //find idx of first instance of substring

	if (str_start == std::string::npos) { //if find returns npos, means substring not present- return s1 unmodified

		return s1;
	}

	s1.erase(str_start, len2); //if substring found, remove it from s1 and return s1
	return s1;


}


/* Vector functions section */

// Joins all strings in a vector together, using the glue string in between them
std::string Join(std::vector<std::string> pieces, std::string glue);

// takes two vectors of integers, a and b. The function then removes elements from a if they are also in b.
// If the integer is in b, but not in a, nothing happens.
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b);

// divides an input integer by 2 until it is impossible to do so, then returns the final number.
// (16 = 2 * 2 * 2 * 2 * 1 -> 1, 7 -> 7, 26 = 2 * 13 -> 13, 52 = 2 * 2 * 13 -> 13)
int RemoveTwos(int original);

// takes a vector of integers and removes all elements evenly divisible by the passed in int
std::vector<int> MultiplesFilter(std::vector<int>, int divides_by);

// returns a vector with true for even numbers and false for odd numbers
std::vector<bool> EvenMask(std::vector<int> vals) {

	std::vector<bool> even_vect; //result vector
	int len = vals.size();

	for (int i = 0; i < len; i++) {  //iterate through input vector

		if (vals[i] % 2 == 0) {  //if element mod 2 is 0, means value is even. push_back 1 (true) to even_vect

			even_vect.push_back(1);
		}

		else {                  //otherwise, value is odd. push_back 0 (false) to even_vect

			even_vect.push_back(0);
		}
	}

	return even_vect;

}

			

// returns a vector with true for odd numbers and false for even numbers
std::vector<bool> OddMask(std::vector<int> vals) {

	std::vector<bool> odd_vect;  //result vector
	int len = vals.size();

	for (int i = 0; i < len; i++) {  //iterate through input vector

		if (vals[i] % 2 != 0) {  //if element mod 2 is not 0, means value is odd. push_back 1 (true) to even_vect

			odd_vect.push_back(1);
		}

		else {

			odd_vect.push_back(0);  //otherwise, value is even. push_back 0 (false) to even_vect
		}
	}

	return odd_vect;

}

// Sums all numbers in a vector and returns the resulting value
int Sum(std::vector<int> nums);

// Multiplies all numbers in a vector together and returns the resulting value
int Product(std::vector<int> nums);

// Adds an integer n to each element of a given vector
std::vector<int> VectorPlusN(std::vector<int> v, int n);

// Multiples an integer n with each element of a given vector
std::vector<int> VectorTimesN(std::vector<int> v, int n);

// takes in two integers and returns a vector of size n with
// values n*1, n*2, n*3... up to n*m
std::vector<int> Multiples(int n, int m);

// takes an integer n that is >= 0 and returns a vector of all squares up to n^n (1^1, 2^2, 3^3, .... n^n)
std::vector<int> SquaresUntil(int n);

// takes an int, n, and returns the nth value of the fibonacci sequence (1, 1, 2, 3, 5, 8, 13, ...)
int NthFibonacci(int n);

// returns -1 if the number is negative and 1 if positive
int Sign(int num);

// takes two vectors of doubles, a and b. The function then removes elements from a if they are also in b.
// If the double is in b, but not in a, nothing happens.
std::vector<double> MatchVectors(std::vector<double> a, std::vector<double> b);

// takes a vector of doubles and removes all elements evenly divisible by the passed in double
std::vector<double> MultiplesFilter(std::vector<double>, double divides_by);

// returns a vector with true for numbers greater than the second parameters and false for those less than or equal to
std::vector<bool> GreaterMask(std::vector<double> nums, double greater_than);

// returns a vector with true for numbers less than the second parameters and false for those greater than or equal to
std::vector<bool> LessMask(std::vector<double> nums, double less_than);

// returns a vector with true for numbers greater than the second parameters and false for those less than or equal to
std::vector<bool> GreaterMask(std::vector<int> nums, int greater_than);

// returns a vector with true for numbers less than the second parameters and false for those greater than or equal to
std::vector<bool> LessMask(std::vector<int> nums, int less_than);

// Sums all numbers in a vector and returns the resulting value
double Sum(std::vector<double> nums);

// Multiplies all numbers in a vector together and returns the resulting value
double Product(std::vector<double> nums);

// Adds an double n to each element of a given vector
std::vector<double> VectorPlusN(std::vector<double> v, double n);

// Multiples an double n with each element of a given vector
std::vector<double> VectorTimesN(std::vector<double> v, double n);

// takes in two doubles and returns a vector of size n with
// values n*1, n*2, n*3... up to n*m
std::vector<double> Multiples(double n, double m);

// returns -1 if the number is negative and 1 if positive
double Sign(double num);

// adds n to each element of the vector
std::vector<double> AddN(std::vector<double>, double n);

// adds n to each element of the vector
std::vector<std::string> AddN(std::vector<std::string>, std::string n);

// subtracts n to each element of the vector
std::vector<int> SubtractN(std::vector<int>, int n);

// subtracts n to each element of the vector
std::vector<double> SubtractN(std::vector<double>, double n);

// ====================================================================

// takes an int, n, and returns the factorial of that int (n!)
int Factorial(int n)
{
	if(n>1)
		return n*Factorial(n-1);
	else
		return 1;
}

// adds n to each element of the vector
std::vector<int> AddN(std::vector<int> v, int n)
{
	for(int i=0;i<(int)v.size();i++)
	{
		v[i]+=n;
	}
	return v;
}

// ====================================================================

/*int main()
{
	std::cout << Factorial (5) <<std::endl; // printing the value
	// assert(Factorial(0) == 1) // cassert
	std::vector<int> v{1,2,3};
	std::vector<int> res = AddN(v, 5);
	for(int i=0;i<res.size();i++)
	{
		std::cout<<res[i]<<" ";
	}
}*/

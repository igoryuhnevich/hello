/*
 * main.cxx
 *
 *  Created on: 11 нояб. 2017 г.
 *      Author: Julia
 */
#include <cstdlib>
#include <iostream>
#include <string>



int main(int /*argc*/, char* /*argv*/[])

{
	using namespace std ;

	string output_phrase("hello word");

	cout << output_phrase << endl;

	bool is_good = cout.good();

	int result = is_good ? EXIT_SUCCESS : EXIT_FAILURE;

	return  result;
}




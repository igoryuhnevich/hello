//#include <cstdlib>
#include <iostream>
//#include <string>

int main(int /*argc*/, char* /*argv*/ [])

{
  using namespace std;

  string output_phrase("hello world ");

  cout << output_phrase << endl;

  cout << "...and the first was the word" << endl;

  bool is_good = cout.good();

  int result = is_good ? EXIT_SUCCESS : EXIT_FAILURE;

  return result;
}

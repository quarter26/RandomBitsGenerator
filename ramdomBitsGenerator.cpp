/* 
(Pseudo)random bits generator
Author: An Da
*/

#include <iostream>
#include <random>
#include <bitset>
#include <fstream>

int main()
{
  /* Seed */
  std::random_device rd;

  /* Random number generator */
  std::default_random_engine generator(rd());

  /*Define a ofstream object */
  std::ofstream myfile;

  /* Create a file named "bits" */
  myfile.open("bits");

  /* Distribution on which to apply the generator */
  std::uniform_int_distribution<long long unsigned> distribution(0,0xFFFFFFFFFFFFFFFF);

  /* A unsigned long long type = 8 bytes = 64 bits.
  Here it generates 15625 unsigned long longs which equals 1,000,000 bits.
  The output file "bits" contains the result. */
  //15625
  for (int i = 0; i < 15625;i++)
  {
    myfile << std::bitset<64>(distribution(generator));
  }
  myfile.close();
  return 0;
}

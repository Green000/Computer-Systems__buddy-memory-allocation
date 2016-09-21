#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <getopt.h>
#include <iostream>

#include "my_allocator.h"

using namespace std;

int main(int argc, char ** argv) {

	int c;
	int b = 128;	 // block size = 2^9
	int M = b * 12;  // mem size = 512kB = 2^10 * 2^7 // so we have space for 12 items
	void * A;
	void * B;
	void * C;
	void * D;
	
	// their getopt() code, keep intact
	
	while ((c = getopt(argc, argv, "bs:")) != -1){
		switch (c){
			case 'b':
				b = atoi(optarg);
				break;
			case 's':
				M = atoi(optarg);
				break;
		}
	}
	cout <<"hi"<<endl;
	init_allocator(1024,64);
	
	A = my_malloc(100);
	cout << A << endl;
  // input parameters (basic block size, memory length)

  // init_allocator(basic block size, memory length)

  //ackerman_main();

  // release_allocator()
}

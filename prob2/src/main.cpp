/*
	Author: Jonghyeok Park
	E-mail: jonghyeok_park@korea.ac.kr

	[WARNING] DO NOT MODIFY THIS FILE
*/
#include <iostream>
#include <stdlib.h>

#include "test.h"

int main(int argc, char** argv) {
	
	Test test;
	Status ret;
	
	if (argc !=2) {
		std::cout << "Usage: " << argv[0] << " <test number>" << std::endl;
		return -1;
	}

	int num = std::atoi(argv[1]);
	ret = test.runSelectedTest(num);

	if (ret != SUCCESS) {
		std::cout << "Test Failed!\n";
		return -1;
	}
		
	return 0;
}

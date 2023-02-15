#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Test {
// public:
Test() {
	printf("Inside Test's Constructor\n");
}

~Test(){
	printf("Inside Test's Destructor");
	getchar();
}
};

int main() {
struct Test t1;

// using exit(0) to exit from main
// exit(0);
return 0;
}

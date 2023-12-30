/*coding_26*/
#include <stdio.h>

int globalvar = 10; //global

void function() {
	int localvar = 5; // local
    printf("Global Variable: %d\n", globalvar);
    printf("Local Variable: %d\n", localvar);
}

int main() {
    function();
    printf("Global Variable after function call: %d\n", globalvar);
    return 0;
}
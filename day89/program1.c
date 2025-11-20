#include <stdio.h>
enum Message { SUCCESS, FAILURE, TIMEOUT };           //Declaration and initialization of enum
int main() {
    printf("SUCCESS=%d\nFAILURE=%d\nTIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);  //Output statement to print enum elements with the auto assigned values
    return 0;
}
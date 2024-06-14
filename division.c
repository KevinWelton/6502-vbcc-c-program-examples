// Simple program to get an asm output on how libraries do division

//  You will need vbcc to compile this program. You can get it here: http://www.compilers.de/vbcc.html.

//  Using cmd, set "VBCC=<path-to-vbcc-root>\vbcc" and "PATH=%PATH%;<path-to-vbcc-root>\bin"
//    or similar to build with vbcc. These are examples, your paths may be different.

//   Don't forget to copy one of the configs in vbcc\config to be named vbcc\config\vc.cfg! I copied s64c02.

//   Build with "vc <path-to-program>\<myfile>.c -o <path to output>\<mybinary>.bin -O0 -k"
//     Note: -k keeps intermediate assembly file, -O0 is no optimization.

#include <stdio.h>

int division(int dividend, int divisor)
{
    return dividend / divisor;
}

int main (void)
{
    int dividend;
    printf("Input dividend\n");
    scanf("%d", &dividend);

    int divisor;
    printf("Input divisor\n");
    scanf("%d", &divisor);
    
    printf("Quotient: %d\n", division(dividend, divisor));
    
    return 0;
}

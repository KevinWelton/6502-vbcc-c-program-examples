// Simple program to get an binary and asm output for simple i/o

//  You will need vbcc to compile this program. You can get it here: http://www.compilers.de/vbcc.html.

//  Using cmd, set "VBCC=<path-to-vbcc-root>\vbcc" and "PATH=%PATH%;<path-to-vbcc-root>\bin"
//    or similar to build with vbcc. These are examples, your paths may be different.

//   Don't forget to copy one of the configs in vbcc\config to be named vbcc\config\vc.cfg! I copied s64c02.

//   Build with "vc <path-to-program>\<myfile>.c -o <path to output>\<mybinary>.bin -O0 -k"
//     Note: -k keeps intermediate assembly file, -O0 is no optimization.

#include <stdio.h>

int print(char* str)
{
   return printf("%s\n", str);
}

int main (void)
{
   char str[100];
   print ("Type a line and press ENTER, please.");
   gets( str );

   printf("You typed: ");
   print(str);
   
   return 0;
}

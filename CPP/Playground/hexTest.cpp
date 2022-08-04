#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

void myMemCpy(void *dest, void *src, size_t n)
{
   // Typecast src and dest addresses to (char *)
   char *csrc = (char *)src;
   char *cdest = (char *)dest;
  
   // Copy contents of src[] to dest[]
   for (int i=0; i<n; i++)
       cdest[i] = csrc[i];
}

int main(){


	char s[] = "Hello World";
	char dest[100];
	
	
	myMemCpy(s, dest, 32);
	
	std::cout << dest;
	
	
}
#include <stdio.h>
#include "main.h"

int main(void)
{
	    unsigned long int n;

	    n = 2048;
	    set_bit(&n, 2000);
	    printf("%lu\n", n);
	        n = 1024;
		    set_bit(&n, 5);
		        printf("%lu\n", n);
			    n = 0;
			        set_bit(&n, 10);
				    printf("%lu\n", n);
				        n = 98;
					    set_bit(&n, 0);
					        printf("%lu\n", n);
						    return (0);
}

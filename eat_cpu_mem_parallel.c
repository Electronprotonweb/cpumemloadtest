#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<omp.h>

// This program can be used for simple parallel (mulri core) CPU and MEM load tests
// This program puts almost 100% load on any or all CPU cores and consumes specified amount of RAM (main memory)
// Usage a.out <num-of-minutes-to-run> <mem-in-gb>

int main( int argc, char *argv[] )  {

        long * holder, rand_val=989978777;
        long  i,m;
        long long j, timed, long_type_mult_factor=134217728, mem_in_gb;

        double x=945346346464.3453453453,y=7899.345345345,z=2343523523.242342342;

        if( argc == 3 ) {
                // printf("The argument supplied is %s\n", argv[1]);
                timed = atoi(argv[1]) ;
                mem_in_gb = atoi(argv[2]) * long_type_mult_factor ;

                printf("This program will run for approximately %s minutes and consumes %s GB of RAM \n", argv[1], argv[2]);
                printf("Please note that this exists with SIGALRM (14) signal\n");
        }
        else if( argc > 3 ) {
                printf("Usage a.out <num-of-minutes-to-run> <mem-in-gb>\n");
				exit(0);
        }
        else {
                printf("Usage a.out <num-of-minutes-to-run> <mem-in-gb>\n");
                exit(0);
        }

        // Allocate memory
        holder = calloc(mem_in_gb, sizeof(long));
        memcpy(holder,&rand_val,sizeof(long));

        alarm(timed*60);
	
	m=9223372036854775807;
	// Burst CPU
	// Parallel For loop
	
	#pragma omp parallel for
	for(i=0;i<m;i++)
	{
                y = sqrt(x) * sin(z) * pow(25,y);
        }
        //free(holder);
return 0;

}

# cpumemloadtest
C Programs to put 100% load on CPU and fill the RAM. Includes Multi-core programs and MPI programs for parallel computing.

1. Parallel Multithreaded CPU and memory load test program 
Note: If the loop counter ends before the specified time the program exits. This is a known issue.

Compiling instructiosn for eat_cpu_mem_parallel.c
#gcc -lm -fopenmp eat_cpu_mem_parallel.c -o eat_cpu_mem_p.o
Note: full instrcutions on usage etc., can be found at https://www.electronproton.com/multi-core-cpu-and-memory-load-test/


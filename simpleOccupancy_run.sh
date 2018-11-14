nvcc -c simpleOccupancy.cu
gcc -c simpleOccupancy_main.c
gcc -o simpleOccupancy simpleOccupancy.o simpleOccupancy_main.o -lcudart -L/usr/local/cuda/lib64
./simpleOccupancy


#!/bin/bash
#
#SBATCH --job-name=hello_world_openmp_
#SBATCH -p p
#SBATCH --ntasks=1

OMP_NUM_THREADS=4 ./hello.o

#include <iostream>
#include <mpi.h>

int main(int argc, char** argv) {
    // Initialize MPI
    MPI_Init(&argc, &argv);

    // Get the total number of processes
    int numProcesses;
    MPI_Comm_size(MPI_COMM_WORLD, &numProcesses);

    // Get the rank of the current process
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // Print a message from each process
    std::cout << "Hello from process " << rank << " of " << numProcesses << std::endl;

    // Finalize MPI
    MPI_Finalize();

    return 0;
}

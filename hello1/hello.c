#include"mpi.h"
#include<stdio.h>

int main(int argc, char *argv[])
{
	int myid,num,name;
	char procname[MPI_MAX_PROCESSOR_NAME];
	MPI_Init(&argc,&argv);
	MPI_Comm_rank(MPI_COMM_WORLD,&myid);
	MPI_Comm_size(MPI_COMM_WORLD,&num);
	MPI_Get_processor_name(procname,&name);
	printf("hello world! process %d of %d on %s\n",myid,num,procname);
	MPI_Finalize();
	return 0;
}

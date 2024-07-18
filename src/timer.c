#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int calc_time_from(clock_t clock);
	int wait_time = 10;
	
	//argv[0] is the exec file name
	//so we want argv[1] and argc must be 2 or greater
	if(argc > 1){
		wait_time = atoi( argv[1]);	
	}

	clock_t c_start = clock();

	int sec = calc_time_from(c_start);

	while(sec < wait_time){
		int new_sec = calc_time_from(c_start);

		if(new_sec != sec){
			printf("%d/%d\n", new_sec, wait_time);
			sec = new_sec;
		}
	}

	printf("\a");
	
	return 0;
}

int calc_time_from(clock_t i_clock)
{
	return (clock() - i_clock)/CLOCKS_PER_SEC;
}


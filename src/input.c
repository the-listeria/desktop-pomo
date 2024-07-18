#include <stdio.h>

char* input_options[] = {
	"1 - see all pomodors",
	"2 - create new one",
	"3 - edit an existing one",
	"4 - mark one as ready",
	"5 - others"
};

int get_options()
{
	int str_array_length(char* arr[]);
	int opts_size = str_array_length(input_options);

	for(int i =0; i < opts_size; ++i){
		printf("%s\n", input_options[i]);
	}

	unsigned int opt;
	printf("option[1-%d]: ", opts_size);
	scanf("%d", &opt);

	return opt;
}


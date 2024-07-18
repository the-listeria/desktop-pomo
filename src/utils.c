
int str_array_length(char* arr[])
{
	int  i =0; 
	while(arr[i]) ++i;

	return i;
}

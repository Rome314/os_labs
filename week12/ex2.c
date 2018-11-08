#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define size 2048

int main(int argc, char const *files[])
{
	char buffer[size];
	if (argc==1)
	{
		while (fgets(buffer, size, stdin) != NULL)
		{
			printf("%s", buffer);
		}
	}
	else if (argc==2)
	{
		FILE* output = fopen(files[1], "w");
		while (fgets(buffer, size, stdin) != NULL)
		{
			fprintf(output, "%ssize", buffer);
			printf("%s", buffer);
		}
		fclose(output);
	}
	else
	{
		if (strcmp("-a", files[1]))
		{
			FILE* output = fopen(files[2], "a");
			while (fgets(buffer, size, stdin) != NULL)
			{
				fprintf(output, "%s", buffer);
				printf("%s", buffer);
			}
			fclose(output);
		}
		else
			return(-1);
	}
	return 0;
}

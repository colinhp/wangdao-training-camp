#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])	//参数的数量、具体参数（本身的exe程序算第一个参数）
{
	int i;
	char buf[1024];
	FILE* fp;
	if (NULL == argv[1])
	{
		printf("error args\n");
		goto error;
	}
	fp = fopen(argv[1], "r+");
	if (NULL == fp)
	{
		perror("fopen");
		goto error;
	}
	while (memset(buf, 0, sizeof(buf)), (fgets(buf, sizeof(buf), fp)) != NULL)
	{
		buf[0] -= 32;	//把首字母改为大学
		if ('\n' == buf[strlen(buf) - 1])
		{
			fseek(fp, -strlen(buf) - 1, SEEK_CUR);
		}
		else
		{
			fseek(fp, -strlen(buf), SEEK_CUR);
		}
		fputs(buf, fp);
		fseek(fp, 0, SEEK_CUR);
	}
	fclose(fp);
error:
	system("pause");
}
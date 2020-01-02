#include <studio.h>

Int main(void)
{
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	int value, i;

	fp1 = fopen(“sample1.txt”, “w”);                    
	if (fp1 == NULL) {
		printf(“파일 열기 실패\n”);
		return 0;
	}
	fp2 = fopen(“sample2.txt”, “wb”);                    
	If(fp2 == NULL) {
		printf(“파일 열기 실패\n”);
		return 0;
	}
	for (i = 0; i < 100; i++)                                              
	{
		value = rand();
		fprintf(fp1, “ % d”, value);
		fwrite(&value, sizeof(int), 1, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}

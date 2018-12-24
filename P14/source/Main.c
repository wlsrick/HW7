#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *fptr;
	char ch;
	int count = 0,i;
	i = fopen_s(&fptr,"D:\\Welcome.txt", "r");
	if (fptr != NULL) {
		while ((ch = getc(fptr)) != EOF) {
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}
	else {
		printf("檔案開啟失敗!!\n");
	}
	system("pause");
	return 0;
}
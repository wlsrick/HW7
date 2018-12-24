#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {
	FILE *in, *out;
	char str[100];
	int cnt, i, j;
	i = fopen_s(&in, "D:\\Welcome.txt", "r");
	j = fopen_s(&out, "D:\\output.txt", "w");
	while (!feof(in)) {
		cnt = fscanf_s(in, "%s", str,100);
		if (cnt > 0)
			fprintf(out, "%s\n", str);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}
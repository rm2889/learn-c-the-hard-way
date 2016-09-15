#include <stdio.h>

int main(int argc, char *argv[]) {
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

	int count = sizeof(ages)/sizeof(int);

	int i = 0;
	for (i = 0; i < count; i++) {
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	printf("-----\n");

	int *cur_age = ages;
	char **curr_name = names;

	for (i = 0; i < count; ++i) {
		printf("%s is %d years old.\n", *(curr_name+i), *(cur_age + i));
	}

	for (i = 0; i < count; ++i) {
		printf("%s is %d years old.\n", curr_name[i], cur_age[i]);
	}

 	for (i = 0; i < count; ++i)
 	{
 		printf("the address of %d is %p\n",cur_age[i], cur_age+i );
 	}

	return 0;
}
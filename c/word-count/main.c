#include <stdio.h>

#include "src/word_count.h"

int
main() {
	int		i;
	char	in[] = "asdasdasd";
	word_count_word_t *words = NULL;

	printf("main\n----------\n");

	i = word_count(in, words);
	printf("i:%d\n", i);

	return 0;
}

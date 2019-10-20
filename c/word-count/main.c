#include <stdio.h>

#include "src/word_count.h"

int
main() {
	int		nwords, i;
	//char	in[] = "asdasdasd qwe 123 qwe sdf";
	char	in[] = "word";
	word_count_word_t words[MAX_WORDS];


	nwords = word_count(in, words);
	printf("uniques:%d\n", nwords);	
	for (i=0; i<nwords; i++) {
		printf("word text:%s count:%d\n", words[i].text, words[i].count);
	}

	return 0;
}

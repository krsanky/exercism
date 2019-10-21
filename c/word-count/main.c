#include <stdio.h>

#include "src/word_count.h"

int
main() {
	int		nwords, i;
	//char	in[] = "asdasdasdr,qwer,123r,qwer,sdf";
	char	*in = "one,two,three";
	//char	in[] = "word";
	word_count_word_t words[MAX_WORDS];
	zero_words(words);


	nwords = word_count(in, words);
	printf("uniques:%d\n", nwords);	
	for (i=0; i<nwords; i++) {
		printf("word text:%s count:%d\n", words[i].text, words[i].count);
	}

	return 0;
}
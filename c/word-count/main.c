#include <stdio.h>

#include "src/word_count.h"

int
main()
{
	int 		nwords   , i;
	/*
	char	in[] = "asdasdasdr,qwer,123r,qwer,sdf";
	char	*in = "one,two,three";
	char	in[] = "word";
	char           *in = "one,\ntwo,\nthree";
	char *input_text = "car: carpet as java: javascript!!&@$%^&";
	char *input_text = "go Go GO Stop stop";
	*/
	char *input_text = "Joe can't tell between 'large' and large.";
	word_count_word_t words[MAX_WORDS];
	zero_words(words);

	nwords = word_count(input_text, words);
	printf("uniques:%d\n", nwords);
	for (i = 0; i < nwords; i++) {
		printf("word text:%s count:%d\n", words[i].text, words[i].count);
	}

	return 0;
}

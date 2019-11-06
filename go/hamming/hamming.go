package hamming

import "errors"

func Distance(a, b string) (int, error) {
	ar, br := []rune(a), []rune(b)
	if len(ar) != len(br) {
		return 0, errors.New("the lengths of a and b differ")
	}

	var count int = 0
	for i := range ar {
		if ar[i] != br[i] {
			count++
		}
	}
	return count, nil
}

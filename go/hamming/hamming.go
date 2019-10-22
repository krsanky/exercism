package hamming

import "fmt"

func Distance(a, b string) (int, error) {
	ar, br := []rune(a), []rune(b)
	if len(ar) != len(br) {
		return 0, fmt.Errorf("len(a) != len(b)")
	}

	var count int = 0
	for i := 0; i < len(ar); i++ {
		if ar[i] != br[i] {
			count++
		}
	}
	return count, nil
}

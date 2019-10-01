package hamming

func Max(x, y int) int {
    if x < y {
        return y
    }
    return x
}

func Distance(a, b string) (int, error) {
	var count int = 0
	var length int = Max(len(a), len(b))

	for i := 0; i < length; i++ {
		if (i < len(a)) && (i < len(b)) {
			if a[i] != b[i] {
				count++
			}
		} else {
			count++
		}
	}
	return count, nil
}

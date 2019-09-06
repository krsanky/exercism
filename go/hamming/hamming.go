package hamming

import "fmt"

func Distance(a, b string) (int, error) {
	for i:=0; i<len(a); i++ {
		fmt.Printf("i:%d c:%s\n", i, a[i])
	} 
	return 3, nil
}

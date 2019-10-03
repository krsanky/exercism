package main

import (
	"fmt"

	"github.com/krsanky/exercism/go/hamming"
)

func main() {
	fmt.Printf("hm\n")
	i, err := hamming.ScaleGTest()
	if err != nil {
		panic(err)
	}
	fmt.Printf("i:%d\n", i)
}

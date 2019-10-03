package main

import (
	"fmt"

	"github.com/krsanky/exercism/go/scale-generator"
)

func main() {
	sarr := scale.Scale("tonic", "interval")
	fmt.Printf("scaleg\n")

	for _, s := range sarr {
		fmt.Printf("s:%s\n", s)
	}
}

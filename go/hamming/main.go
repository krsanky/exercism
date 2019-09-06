package main

import (
	"fmt"
)

func main() {
	fmt.Printf("main\n")
	s1 := "asdasdasd"
	for i, c := range s1 {
		fmt.Printf("i:%d c:%s\n", i, string(c))
	}
}

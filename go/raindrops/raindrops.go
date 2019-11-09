package raindrops

import "fmt"

func Convert(n int) string {
	var res string
	var has bool

	if n%3 == 0 {
		res += "Pling"
		has = true
	}
	if n%5 == 0 {
		res += "Plang"
		has = true
	}
	if n%7 == 0 {
		res += "Plong"
		has = true
	}

	if !has {
		res = fmt.Sprintf("%d", n)
	}

	return res
}

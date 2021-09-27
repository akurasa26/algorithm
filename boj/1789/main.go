package main

import (
	"fmt"
	"math"
)

func main() {
	var a int64
	fmt.Scan(&a)
	i := int64(1)
	for ; i < math.MaxInt32; i++ {
		if a == ((1 + i) * i / 2) {
			break
		}
		if a < ((1 + i) * i / 2) {
			i--
			break
		}
	}
	println(i)
}

//  4294967295

package main

import (
	"fmt"
	"math"
	"sort"
)

func main() {
	var n int
	var y uint64
	fmt.Scan(&n)
	var s []int

	min := uint64(math.MaxUint32)
	max := uint64(0)
	for i := 0; i < n; i++ {
		fmt.Scan(&y)
		if  y < min {
			min = y
		}
		if max < y {
			max = y
		}
	}
	sort.Ints(s)


	fmt.Println(min * max)
}

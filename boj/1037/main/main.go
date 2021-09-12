package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int
	var y int
	var big uint64 = 1
	fmt.Scan(&n)
	a :=1
	var s []int
	if n == 0 {
		fmt.Println(1)
		return
	}
	if n == 1{
		fmt.Scan(&y)
		fmt.Println(y)
	}
	for i := 0; i < n; i++ {
		fmt.Scan(&y)
		big *= uint64(y)
		s = append(s, y)
	}
	sort.Ints(s)
	mostBig := uint64(s[len(s)-1])
	var i uint64 = mostBig
	var candis []uint64
	for ; i <= big; i += mostBig {
		candis = append(candis, mostBig)
	}

	fmt.Println(a)
}

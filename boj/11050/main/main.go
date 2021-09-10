package main

import "fmt"

func main() {
	var n, k int
	fmt.Scanf("%d %d", &n, &k)
	if k == 0 {
		fmt.Printf("%d", 1)
		return
	}
	nPac := 1
	for i := 1; i <= n; i++ {
		nPac *= i
	}
	kPac := 1
	for i := 1; i <= k; i++ {
		kPac *= i
	}
	nMinusKPac := 1
	for i := 1; i <= n-k; i++ {
		nMinusKPac *= i
	}
	fmt.Printf("%d", nPac/(kPac*nMinusKPac))
}

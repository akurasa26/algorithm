package main

import (
	"fmt"
	"math/big"
)

func fac(n big.Int, lim big.Int) *big.Int {
	var m = new(big.Int)
	if n.Cmp(&lim) <= 0 {
		return m.SetInt64(int64(1))

	}
	m.SetInt64(int64(1))
	m = n.Sub(&n, m)
	return n.Mul(&n, fac(*m, lim))
}

func main() {
	var t int
	fmt.Scanf("%d", &t)
	for i := 0; i < t; i++ {
		var a, b big.Int
		fmt.Scanf("%d %d", &a, &b)
		fmt.Println(fac(b, a))
		var lim = new(big.Int)
		lim = lim.SetInt64(int64(1))
		fmt.Println(lim.Div(fac(b, a), fac(a, *lim)).Text(10))

	}
}

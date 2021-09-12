package main

import (
	"fmt"
	"math/big"
)

func fac(n *big.Int) *big.Int {
	if n.Cmp(big.NewInt(1)) <= 0 {
		return big.NewInt(1)
	}

	var m = big.NewInt(1)
	sub := new(big.Int)
	sub = sub.Sub(n, m)
	a := big.NewInt(1)
	return a.Mul(n, fac(sub))
}

func main() {
	var t int

	fmt.Scanf("%d", &t)
	for i := 0; i < t; i++ {
		var n, k big.Int
		fmt.Scanf("%d %d", &k,	 &n)
		ans := new(big.Int)
		sub := new(big.Int)
		sub = sub.Sub(&n, &k)
		ans = ans.Div(fac(&n), ans.Mul(fac(&k), fac(sub)))

		fmt.Println(ans.Text(10))
	}
}

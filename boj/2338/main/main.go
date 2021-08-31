package main

import (
	"bufio"
	"fmt"
	"math/big"
	"os"
)

var reader = bufio.NewReader(os.Stdin)

func main() {
	var a, b big.Int
	fmt.Scanf("%d", &a)
	fmt.Scanf("%d", &b)
	add := new(big.Int)
	sub := new(big.Int)
	mul := new(big.Int)

	fmt.Println(add.Add(&a, &b))
	fmt.Println(sub.Sub(&a, &b))
	fmt.Println(mul.Mul(&a, &b))

}

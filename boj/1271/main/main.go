package main

import (
	"bufio"
	"fmt"
	"math/big"
	"os"
)

var reader = bufio.NewReader(os.Stdin)
var scanner = bufio.NewScanner(os.Stdin)
var writer = bufio.NewWriter(os.Stdout)

func init() {
	scanner.Split(bufio.ScanWords)
}

func main() {
	defer writer.Flush()
	var n, m big.Int

	fmt.Fscan(reader, &n, &m)
	divide := new(big.Int)
	divide = divide.Div(&n, &m)
	mod := new(big.Int)
	mod = mod.Mod(&n, &m)

	fmt.Println(divide)
	fmt.Println(mod)
}

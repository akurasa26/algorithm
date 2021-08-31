package main

import (
	"bufio"
	"fmt"
	"math/big"
	"os"
)

var reader = bufio.NewReader(os.Stdin)
var writer = bufio.NewWriter(os.Stdout)

func main() {
	defer writer.Flush()
	for t := 0; t < 3; t++ {
		var n int
		fmt.Fscan(reader, &n)
		s := new(big.Int)
		s, _ = s.SetString("0", 10)
		for i := 0; i < n; i++ {
			var N big.Int
			fmt.Fscan(reader, &N)
			s = s.Add(s, &N)
		}
		sig := s.Sign()
		if sig == 0 {
			fmt.Fprintln(writer, 0)
		} else if sig == 1 {
			fmt.Fprintln(writer, "+")
		} else {
			fmt.Fprintln(writer, "-")
		}
	}
}

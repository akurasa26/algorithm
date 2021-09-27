package main

import (
	"bufio"
	"fmt"
	"os"
)

var r = bufio.NewReader(os.Stdin)
var w = bufio.NewWriter(os.Stdout)

func main() {
	defer w.Flush()
	var a, b int
	var al, bl, result []int
	fmt.Fscanf(r, "%d %d", &a, &b)

	for i := 0; i < a; i++ {
		var n int
		fmt.Fscan(r, &n)
		al = append(al, n)
	}

	for i := 0; i < b; i++ {
		var n int
		fmt.Fscan(r, &n)
		bl = append(bl, n)
	}
	ac := 0
	bc := 0
	for ac < a || bc < b {
		if ac >= a {
			result = append(result, bl[bc])
			bc++
			continue
		}
		if bc >= b {
			result = append(result, al[ac])
			ac++
			continue
		}
		if al[ac] < bl[bc] {
			result = append(result, al[ac])
			ac++
		} else {
			result = append(result, bl[bc])
			bc++
		}
	}

	for _, n := range result {
		fmt.Fprintf(w, "%d ", n)
	}
}

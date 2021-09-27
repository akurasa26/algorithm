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
	var p, l, v int64
	c := 1
	for true {
		fmt.Fscanf(r, "%d %d %d\n", &p, &l, &v)
		if p == 0 && l == 0 && v == 0 {
			return
		}
		visit := v / l
		ans := visit * p

		if (v - (visit * l)) > p {
			ans += p
		} else {
			ans += v - (visit * l)
		}

		fmt.Fprintf(w, "Case %d: %d \n", c, ans)
		c++
	}
}

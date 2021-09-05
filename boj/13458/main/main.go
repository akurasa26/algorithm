package main

import (
	"bufio"
	"fmt"
	"os"
)

var reader = bufio.NewReader(os.Stdin)
var writer = bufio.NewWriter(os.Stdout)

func main() {
	defer writer.Flush()
	var n, b, c int
	fmt.Fscan(reader, &n)
	room := make([]int, n)
	answer := 0
	for i := range room {
		var a int
		fmt.Fscan(reader, &a)
		room[i] = a
	}
	fmt.Fscan(reader, &b, &c)
	for _, s := range room {
		answer += 1
		s -= b
		if s <= 0 {
			continue
		}
		var sub int
		if s%c == 0 {
			sub = s / c
		} else {
			sub = s/c + 1
		}
		answer += sub
	}
	fmt.Fprintf(writer, "%d", answer)
}

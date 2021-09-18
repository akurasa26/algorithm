package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)
var reader = bufio.NewReaderSize(os.Stdin, 4000004)
var writer = bufio.NewWriter(os.Stdout)

func main() {
	defer writer.Flush()
	var n string
	fmt.Fscan(reader, &n)
	include0 := false
	var sum = 0
	var ns []int
	for _, ch := range n {
		a := int(ch) - '0'
		if a == 0 {
			include0 = true
		}
		ns = append(ns, a)
		sum += a
	}
	if !include0 || sum % 3 != 0 {
		fmt.Fprint(writer, -1)
		return
	}
	sort.Ints(ns)
	for i, j := 0, len(ns)-1; i < j; i, j = i+1, j-1 {
		ns[i], ns[j] = ns[j], ns[i]
	}

	for _, i := range ns {
		fmt.Fprint(writer, i)
	}
}

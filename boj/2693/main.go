package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

var reader = bufio.NewReader(os.Stdin)
var writer = bufio.NewWriter(os.Stdout)

func main() {
	defer writer.Flush()
	var t int
	fmt.Scanf("%d", &t)
	var arr = make([]int, 10)
	for i := 0; i < t; i++ {
		for j := 0; j < 10; j++ {
			var n int
			fmt.Fscan(reader, &n)
			arr[j] = n
		}
		sort.Ints(arr)
		fmt.Fprintf(writer, "%d\n", arr[7])
	}

}

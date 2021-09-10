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
	var n, m int
	fmt.Fscan(reader, &n, &m)

	arr := make([][]int, n)

	for i := 0; i < n; i++ {
		arr[i] = make([]int, m)
		for j := 0; j < m; j++ {
			var num int
			fmt.Fscan(reader, &num)
			arr[i][j] = num
		}
	}

	var k int
	fmt.Fscan(reader, &k)
	for i := 0; i < k; i++ {
		var x1, y1, x2, y2 int
		fmt.Fscan(reader, &x1, &y1, &x2, &y2)
		var sum int
		for j := x1 - 1; j < x2; j++ {
			for l := y1 - 1; l < y2; l++ {
				sum += arr[j][l]
			}
		}
		fmt.Fprintf(writer, "%d\n", sum)
	}
}

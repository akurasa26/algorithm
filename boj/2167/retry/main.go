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
		var num int
		fmt.Fscan(reader, &num)
		arr[i][0] = num
		for j := 1; j < m; j++ {
			fmt.Fscan(reader, &num)
			arr[i][j] = arr[i][j-1] + num
		}
	}

	var k int
	fmt.Fscan(reader, &k)
	for i := 0; i < k; i++ {
		var x1, y1, x2, y2 int
		fmt.Fscan(reader, &x1, &y1, &x2, &y2)
		var sum int
		yFirst := y1-2
		yLast := y2-1
		for j := x1 - 1; j < x2; j++ {
			if yFirst == -1 {
				sum += arr[j][yLast]
			} else {
				sum += arr[j][yLast] - arr[j][yFirst]
			}
		}
		fmt.Fprintf(writer, "%d\n", sum)
	}
}

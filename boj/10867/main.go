package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

var scanner = bufio.NewScanner(os.Stdin)
var writer = bufio.NewWriter(os.Stdout)

func main() {
	defer writer.Flush()
	var ans []int
	scanner.Split(bufio.ScanWords)
	scanner.Scan()
	n, _ := strconv.Atoi(scanner.Text())
	for i := 0; i < n; i++ {
		scanner.Scan()
		m, _ := strconv.Atoi(scanner.Text())
		ans = append(ans, m)
	}
	sort.Ints(ans)
	fmt.Fprintf(writer, "%d ", ans[0])
	for i := 1; i < n; i++ {
		if ans[i-1] == ans[i] {
			continue
		}
		fmt.Fprintf(writer, "%d ", ans[i])
	}
}

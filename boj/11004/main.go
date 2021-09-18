package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)
var sc = bufio.NewScanner(os.Stdin)
var writer = bufio.NewWriter(os.Stdout)
func main() {
	defer writer.Flush()
	var n, k int
	sc.Split(bufio.ScanWords)
	sc.Scan()
	n, _ = strconv.Atoi(sc.Text())
	sc.Scan()
	k, _ = strconv.Atoi(sc.Text())

	var ns []int
	var a int
	for i := 0; i < n; i++ {
		sc.Scan()
		a, _ = strconv.Atoi(sc.Text())
		ns = append(ns, a)
	}
	sort.Ints(ns)
	fmt.Println(ns[k-1])
}

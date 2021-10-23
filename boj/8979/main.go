package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

var reader = bufio.NewReader(os.Stdin)

func main() {

	var n, m int
	fmt.Fscanf(reader, "%d %d", &n, &m)
	var gold = uint64(1000000) * uint64(1000000)
	var silver = uint64(1000000)
	var nations = make([]uint64, n)
	for i := 0; i < n; i++ {
		var nation, g, s, b uint64

		fmt.Fscan(reader, &nation, &g, &s, &b)
		nations[nation-1] = gold*g + silver*s + b
	}
	var score = nations[m-1]
	sort.Slice(nations, func(i, j int) bool { return nations[i] > nations[j] })
	for i, nationScore := range nations {
		if nationScore == score {
			fmt.Println(i + 1)
			return
		}
	}
}

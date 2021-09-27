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
	m := make(map[string]bool)
	scanner.Split(bufio.ScanWords)
	scanner.Scan()
	n, _ := strconv.Atoi(scanner.Text())
	for i := 0; i < n; i++ {
		scanner.Scan()
		name := scanner.Text()
		scanner.Scan()
		enter := scanner.Text()
		if enter == "enter" {
			m[name] = true
		} else {
			m[name] = false
		}
	}
	var ans []string
	for s := range m {
		if m[s] {
			ans = append(ans, s)
		}
	}
	sort.Strings(ans)
	for i := len(ans) - 1; i >= 0; i-- {
		fmt.Fprintln(writer, ans[i])
	}

}

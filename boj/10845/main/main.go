package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

var scanner = bufio.NewScanner(os.Stdin)
var writer = bufio.NewWriter(os.Stdout)

func main() {
	defer writer.Flush()
	var t int
	scanner.Scan()
	t, _ = strconv.Atoi(scanner.Text())
	var q []int
	for t != 0 {
		t--
		var s string
		var i int
		scanner.Scan()
		s = scanner.Text()
		pre := s[:2]
		if pre == "pu" {
			ss := strings.Split(s, " ")
			i, _ = strconv.Atoi(ss[1])
			q = append(q, i)
		}
		if pre == "po" {
			if len(q) == 0 {
				fmt.Fprintln(writer, -1)
			} else {
				fmt.Fprintln(writer, q[0])
				q = q[1:]
			}
		}
		if pre == "si" {
			fmt.Fprintln(writer, len(q))
		}
		if pre == "em" {
			if len(q) == 0 {
				fmt.Fprintln(writer, 1)
			} else {
				fmt.Fprintln(writer, 0)
			}
		}
		if pre == "fr" {
			if len(q) == 0 {
				fmt.Fprintln(writer, -1)
			} else {
				fmt.Fprintln(writer, q[0])
			}
		}
		if pre == "ba" {
			if len(q) == 0 {
				fmt.Fprintln(writer, -1)
			} else {
				fmt.Fprintln(writer, q[len(q)-1])
			}
		}
	}
}

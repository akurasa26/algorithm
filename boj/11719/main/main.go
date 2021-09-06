package main

import (
	"bufio"
	"fmt"
	"os"
)

var scanner = bufio.NewScanner(os.Stdin)

func main() {
	for true {
		var s string
		success := scanner.Scan()
		if !success {
			return
		}
		s = scanner.Text()
		fmt.Println(s)
	}
}

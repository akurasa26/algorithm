package main

import (
	"bufio"
	"fmt"
	"os"
)

var reader = bufio.NewReader(os.Stdin)

func main() {
	var s string
	fmt.Fscanln(reader, &s)
	if len(s) <= 1 {
		fmt.Println(0)
		return
	}

	before := s[0]
	diff := 0
	for i := 1; i < len(s); i++ {
		if before != s[i] {
			before = s[i]
			diff++
		}
	}

	fmt.Println((diff + 1) / 2)
}

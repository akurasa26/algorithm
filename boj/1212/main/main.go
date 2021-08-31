package main

import (
	"bufio"
	"fmt"
	"os"
)

var reader = bufio.NewReaderSize(os.Stdin, 333335)
var writer = bufio.NewWriter(os.Stdout)

func main() {
	defer writer.Flush()
	var s string
	fmt.Fscan(reader, &s)

	var ch = s[0] - 48
	fmt.Fprintf(writer, "%b", ch)
	for i := 1; i < len(s); i++ {
		var ch = s[i] - 48
		fmt.Fprintf(writer, "%03b", ch)
	}
}

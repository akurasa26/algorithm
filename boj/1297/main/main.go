package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

var reader = bufio.NewReader(os.Stdin)

func main() {
	var a, b, c float64
	fmt.Scanf("%f %f %f", &a, &b, &c)
	bb := b * b
	cc := c * c
	ratio := a / math.Sqrt(bb+cc)
	b *= ratio
	c *= ratio

	fmt.Printf("%.0f %.0f", math.Floor(b), math.Floor(c))
}

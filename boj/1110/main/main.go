package main

import "fmt"

func main() {
	var org int
	fmt.Scanf("%d", &org)
	a := org
	c := 0
	for true {
		if a < 0 {
			a *= 10
		}
		tens, units := a / 10, a % 10
		a = units * 10 + (tens + units) % 10
		c++
		if a == org {
			break
		}
	}
	fmt.Printf("%d", c)
}

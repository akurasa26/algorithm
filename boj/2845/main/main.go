package main

import "fmt"

func main() {
	var l, p int
	var a, b, c, d, e int
	fmt.Scanf("%d %d", &l, &p)
	lp := l * p
	fmt.Scanf("%d %d %d %d %d", &a, &b, &c, &d, &e)
	fmt.Printf("%d %d %d %d %d", a-lp, b-lp, c-lp, d-lp, e-lp)
}

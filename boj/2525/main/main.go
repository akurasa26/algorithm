package main

import "fmt"

func main() {
	var h, m, t int;
	fmt.Scanf("%d %d", &h, &m)
	fmt.Scanf("%d", &t)
	m += t
	h += m / 60
	m %= 60
	h %= 24
	fmt.Printf("%d %d", h, m)
}

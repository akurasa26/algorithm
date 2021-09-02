package main

import "fmt"

func main() {
	var h, m, s, t int;
	fmt.Scanf("%d %d %d", &h, &m, &s)
	fmt.Scanf("%d", &t)
	s += t
	m += s / 60
	h += m / 60
	s %= 60
	m %= 60
	h %= 24
	fmt.Printf("%d %d %d", h, m, s)
}

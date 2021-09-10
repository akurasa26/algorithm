package main

import "fmt"

func gcd(n int, m int) int {
	if n > m {
		n, m = m, n
	}
	if n == 0 {
		return m
	}
	if m%n == 0 {
		return n
	}
	return gcd(n, m%n)
}

func main() {
	var t int
	fmt.Scanf("%d", &t)
	for i := 0; i < t; i++ {
		var n, m int
		fmt.Scanf("%d %d", &n, &m)
		var g = gcd(n, m)
		fmt.Println(n * m / g)
	}
}

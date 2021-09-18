package main

import "fmt"

func main() {
	var x int
	fmt.Scanf("%d", &x)

	if x == 64 {
		fmt.Println(1)
		return
	}
	ans := 0
	a := 32
	for x > 0 {
		if x >= a {
			x -= a
			ans++
		}
		a /= 2
	}
	fmt.Println(ans)
}

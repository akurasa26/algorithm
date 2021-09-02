package main

import "fmt"

func main() {
	var a, b int
	fmt.Scanf("%d %d", &a, &b)
	sub := int64(b) - int64(a)
	if sub < 0 {
		sub *= -1
	}
	fmt.Println(sub)
}

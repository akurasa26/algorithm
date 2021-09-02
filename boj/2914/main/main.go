package main

import "fmt"

func main() {
	var a, i int
	fmt.Scanf("%d %d", &a, &i)
	fmt.Print(a * i - a + 1)
}

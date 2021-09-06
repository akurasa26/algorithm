package main

import "fmt"

func main() {
	var s string
	fmt.Scanln(&s)
	fmt.Printf("%d", len(s))
}

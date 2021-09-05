package main

import "fmt"

func main() {
	var s string
	fmt.Scanln(&s)
	for i := range s {
		if i != 0 && i%10 == 0 {
			fmt.Println()
		}
		fmt.Printf("%c", s[i])
	}
}

package main

import (
	"fmt"
)

func main() {
	c := 0
	for i := 0; i < 8; i++ {
		var s string
		fmt.Scanln(&s)
		for j := 0; j < 8; j++ {
			if s[j] == 'F' && (i+j)%2 == 0 {
				c += 1
			}
		}
	}
	fmt.Println(c)
}

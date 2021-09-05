package main

import "fmt"

func main() {
	var s string
	fmt.Scanln(&s)
	counts := make([]int, 26)
	for c := range s {
		i := s[c] - 'a'
		counts[i]++
	}
	for c := range counts {
		fmt.Printf("%d", counts[c])
		fmt.Printf(" ")
	}
}

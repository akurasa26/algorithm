package main

import "fmt"

func main() {
	var s string
	fmt.Scanln(&s)
	ans := 0
	cards := make([]int, 9)
	for _, c := range s {
		n := c - '0'
		if n == 9 {
			n = 6
		}
		if cards[n] > 0 {
			cards[n] -= 1
			continue
		}
		for i := range cards {
			cards[i]++
		}
		ans += 1
		cards[6]++
		cards[n]--
	}
	fmt.Println(ans)
}

package main

import "fmt"

func main() {
	var s, e int
	fmt.Scanf("%d %d", &s, &e)

	l := make([]int, 1001)

	c := 0
	for i := 1; i < 1001; i++ {
		for j := 0; j < i; j++ {
			l[c] = i
			c++
			if c >= 1000 {
				break
			}
		}
		if c >= 1000 {
			break
		}
	}
	ans := 0
	for i := s - 1; i < e; i++ {
		ans += l[i]
	}
	fmt.Println(ans)
}

package main

import "fmt"

func main() {
	s := make([][]bool, 101)
	for i := 0; i < 101; i++ {
		s[i] = make([]bool, 101)
	}
	var c int
	fmt.Scanf("%d", &c)
	for i := 0; i < c; i++ {
		var x, y int
		fmt.Scanf("%d %d", &x, &y)
		for j := x; j < x+10; j++ {
			for k := y; k < y+10; k++ {
				s[j][k] = true
			}
		}
	}
	ans := 0
	for i := 0; i < 101; i++ {
		for j := 0; j < 101; j++ {
			if s[i][j] {
				ans++
			}
		}
	}
	fmt.Println(ans)
}

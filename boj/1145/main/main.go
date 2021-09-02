package main

import "fmt"

func main() {
	var a,b,c,d,e int
	fmt.Scanf("%d %d %d %d %d", &a, &b, &c, &d, &e)
	ns := []int{a,b,c,d,e}
	for i := 1; i < 10000001; i++ {
		c := 0
		for _, n := range ns {
			if i % n == 0 {
				c++
			}
		}
		if c >= 3 {
			fmt.Println(i)
			return
		}
	}
}

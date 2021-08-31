package main

import "fmt"

func main() {
	var n, f int
	fmt.Scanf("%d", &n)
	fmt.Scanf("%d", &f)
	n -= n % 100
	for i := 0; i < 100; i++ {
		if (n+i)%f == 0 {
			if i < 10 {
				fmt.Printf("0%d", i)
			} else {
				fmt.Printf("%d", i)
			}
			return
		}
	}
}

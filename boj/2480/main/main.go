package main

import "fmt"

func max(a int, b int) int {
	if a > b {
		return a
	} else {
		return b
	}

}

func main() {
	var a, b, c int
	fmt.Scanf("%d %d %d", &a, &b, &c)
	if a == b && b == c {
		fmt.Println(10000 + a*1000)
	} else if a == b {
		fmt.Println(1000 + a*100)
	} else if b == c {
		fmt.Println(1000 + b*100)
	} else if a == c {
		fmt.Println(1000 + a*100)
	} else {
		fmt.Println(max(max(a,b), c) * 100)
	}
}

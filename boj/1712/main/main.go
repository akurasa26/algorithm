package main

import "fmt"

func main() {
	var a,b,c int
	fmt.Scanf("%d %d %d", &a,&b,&c)
	if b >= c {
		fmt.Println(-1)
	} else {
		ans := a / (c-b) + 1
		fmt.Println(ans)
	}
}

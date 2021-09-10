package main

import "fmt"

func main() {
	var t int
	fmt.Scanf("%d", &t)
	for t != 0 {
		t--
		var s string
		fmt.Scanln(&s)
		var stack int
		var yes = true
		for _, a := range s {
			if a == '(' {
				stack++
				continue
			}
			if stack == 0 {
				yes = false
				break
			}
			stack--
		}
		if yes && stack == 0 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}

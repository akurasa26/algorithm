package main

import "fmt"

func main() {
	var k, n int
	fmt.Scanf("%d %d", &n, &k)
	killed := make([]int, n)
	for i := range killed {
		killed[i] = i + 1
	}
	i := k - 1
	fmt.Printf("<")
	for len(killed) != 0 {
		fmt.Printf("%d", killed[i])
		if len(killed) != 1 {
			fmt.Printf(", ")
		} else {
			break
		}
		if len(killed) == i-1 {
			killed = killed[:i]
		} else {
			killed = append(killed[:i], killed[i+1:]...)
		}

		i += k - 1
		i %= len(killed)
	}
	fmt.Printf(">")
}

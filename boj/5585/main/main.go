package main

import "fmt"

func main() {
	var cost int
	fmt.Scanf("%d", &cost)
	money := 1000 - cost
	count := 0

	if money >= 500 {
		count += money / 500
		money %= 500
	}
	if money >= 100 {
		count += money / 100
		money %= 100
	}
	if money >= 50 {
		count += money / 50
		money %= 50
	}
	if money >= 10 {
		count += money / 10
		money %= 10
	}
	if money >= 5 {
		count += money / 5
		money %= 5
	}

	count += money
	fmt.Println(count)
}

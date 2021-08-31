package main

import (
	"fmt"
)

func main() {
	v := map[string]int{
		"black":  0,
		"brown":  1,
		"red":    2,
		"orange": 3,
		"yellow": 4,
		"green":  5,
		"blue":   6,
		"violet": 7,
		"grey":   8,
		"white":  9,
	}
	var c1, c2, c3 string
	fmt.Scanln(&c1)
	fmt.Scanln(&c2)
	fmt.Scanln(&c3)
	var ohm int64
	ohm = 0
	ohm += int64(v[c1] * 10)
	ohm += int64(v[c2])
	for i := 0; i < v[c3]; i++ {
		ohm *= 10
	}
	fmt.Println(ohm)
}

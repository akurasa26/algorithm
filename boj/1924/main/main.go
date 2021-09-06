package main

import (
	"fmt"
)

func main() {
	month := []int{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
	dayOfWeek := []string{"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"}
	days := 0
	var m, d int
	fmt.Scanf("%d %d", &m, &d)

	for i := 0; i < m-1; i++ {
		days += month[i]

	}
	days += d - 1
	fmt.Println(dayOfWeek[days%7])
}

package main

import (
	"fmt"
	"strconv"
)

func main() {
	var s string
	fmt.Scanln(&s)
	i, _ := strconv.ParseInt(s, 16, 0)
	fmt.Println(i)
}

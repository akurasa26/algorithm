package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
	var s string
	fmt.Scanln(&s)
	var ans int64
	if strings.HasPrefix(s, "0x") {
		s = s[2:]
		if i, err := strconv.ParseInt(s, 16, 0); err != nil {
			fmt.Println(err)
		} else {
			ans = i
		}
	} else if strings.HasPrefix(s, "0") {
		s = s[1:]
		if i, err := strconv.ParseInt(s, 8, 0); err != nil {
			fmt.Println(err)
		} else {
			ans = i
		}
	} else {
		fmt.Println(s)
		return
	}
	fmt.Println(ans)
}

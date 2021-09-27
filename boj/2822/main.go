package main

import (
	"fmt"
	"sort"
)

func main() {
	scoreMap := make(map[int]int)
	var topScores []int
	var ans []int
	for i := 0; i < 8; i++ {
		var n int
		fmt.Scanln(&n)
		scoreMap[n] = i
		topScores = append(topScores, n)
	}
	sort.Ints(topScores)
	for i := 0; i < len(topScores)/2; i++ {
		topScores[i], topScores[len(topScores)-i-1] = topScores[len(topScores)-i-1], topScores[i]
	}

	s := 0
	for i := 0; i < 5; i++ {
		ans = append(ans, scoreMap[topScores[i]])
		s += topScores[i]
	}
	sort.Ints(ans)
	fmt.Println(s)
	for i := range ans {
		fmt.Printf("%d ", ans[i]+1)

	}
}

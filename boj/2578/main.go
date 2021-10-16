package main

import "fmt"

func main() {
	var board [][]int
	var checker [][]bool

	for i := 0; i < 5; i++ {
		var line []int
		for j := 0; j < 5; j++ {
			var n int
			fmt.Scan(&n)
			line = append(line, n)
		}
		board = append(board, line)
		checker = append(checker, make([]bool, 5))
	}
	for k := 0; k < 25; k++ {
		var n int
		bingos := 0
		fmt.Scan(&n)
		isBreak := false
		for i := 0; i < 5; i++ {
			for j := 0; j < 5; j++ {
				if board[i][j] == n {
					checker[i][j] = true
					isBreak = true
					break
				}
				if isBreak {
					break
				}
			}
		}
		for i := 0; i < 5; i++ {
			isBingo := true
			for j := 0; j < 5; j++ {
				if !checker[i][j] {
					isBingo = false
				}
			}
			if isBingo {
				bingos++
			}
		}
		for i := 0; i < 5; i++ {
			isBingo := true
			for j := 0; j < 5; j++ {
				if !checker[j][i] {
					isBingo = false
				}
			}
			if isBingo {
				bingos++
			}
		}

		isBingo := true
		for i := 0; i < 5; i++ {
			if !checker[i][i] {
				isBingo = false
			}
		}
		if isBingo {
			bingos++
		}
		isBingo = true
		for i := 0; i < 5; i++ {
			if !checker[i][4-i] {
				isBingo = false
			}
		}
		if isBingo {
			bingos++
		}
		if bingos >= 3 {
			fmt.Println(k + 1)
			return
		}
	}

}

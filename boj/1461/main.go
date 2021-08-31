package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

func abs(a int) int {
	if a < 0 {
		return -a
	}
	return a
}
func main() {

	var n, carry int
	sc := bufio.NewScanner(os.Stdin)
	sc.Split(bufio.ScanWords)
	sc.Scan()

	n, _ = strconv.Atoi(sc.Text())

	sc.Scan()
	carry, _ = strconv.Atoi(sc.Text())
	if n == 0 {
		println(0)
		return
	}

	// 입력 받으면서 음수가 먼지, 양수가 먼지에 따라 정렬순서 정함
	var mloc, ploc []int
	farest := 0
	for i := 0; i < n; i++ {
		sc.Scan()
		loc, _ := strconv.Atoi(sc.Text())
		if loc > 0 {
			ploc = append(ploc, loc)
		} else {
			mloc = append(mloc, abs(loc))
		}
		if abs(loc) > abs(farest) {
			farest = loc
		}
	}
	// 정렬
	sort.Ints(ploc)
	sort.Ints(mloc)
	lp, lm := len(ploc), len(mloc)

	// 뒤집기
	for i, j := 0, lp-1; i < j; i, j = i+1, j-1 {
		ploc[i], ploc[j] = ploc[j], ploc[i]
	}
	for i, j := 0, lm-1; i < j; i, j = i+1, j-1 {
		mloc[i], mloc[j] = mloc[j], mloc[i]
	}

	lp, lm = len(ploc), len(mloc)
	ans := 0

	for i := 0; i < lp; i += carry {
		ans += abs(ploc[i])
	}
	for i := 0; i < lm; i += carry {
		ans += abs(mloc[i])
	}
	// 왕복
	ans *= 2
	// 마지막 가장 긴 편도
	ans -= abs(farest)
	fmt.Printf("%d", ans)
}

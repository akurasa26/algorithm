package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

func main() {
	var crains []int
	var n, m int
	sc := bufio.NewScanner(os.Stdin)
	sc.Split(bufio.ScanWords)
	sc.Scan()
	n, _ = strconv.Atoi(sc.Text())
	for i := 0; i < n; i++ {
		sc.Scan()
		b, _ := strconv.Atoi(sc.Text())
		crains = append(crains, b)
	}

	sc.Scan()
	m, _ = strconv.Atoi(sc.Text())
	var boxes []int
	for i := 0; i < m; i++ {
		sc.Scan()
		b, _ := strconv.Atoi(sc.Text())
		boxes = append(boxes, b)
	}

	sort.Ints(crains)
	crainPos := make([]int, n)
	boxCheck := make([]bool, m)
	for i, j := 0, len(crains)-1; i < j; i, j = i+1, j-1 {
		crains[i], crains[j] = crains[j], crains[i]
	}
	sort.Ints(boxes)

	for i, j := 0, len(boxes)-1; i < j; i, j = i+1, j-1 {
		boxes[i], boxes[j] = boxes[j], boxes[i]
	}
	count := 0

	if boxes[0] > crains[0] {
		fmt.Printf("%d", -1)
		return
	}
	checked := 0
	for checked < m {
		for i := range crains {
			for j := crainPos[i]; j < m; j++ {
				if !boxCheck[j] && crains[i] >= boxes[j] {
					crainPos[i]++
					boxCheck[j] = true
					checked++
					break
				}
				crainPos[i]++
			}
		}
		count++
	}
	fmt.Printf("%d", count)
}

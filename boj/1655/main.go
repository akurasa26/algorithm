package main

import (
	"bufio"
	"container/heap"
	"fmt"
	"os"
)

type IntMinHeap []int

func (h IntMinHeap) Len() int           { return len(h) }
func (h IntMinHeap) Less(i, j int) bool { return h[i] < h[j] }
func (h IntMinHeap) Swap(i, j int)      { h[i], h[j] = h[j], h[i] }

func (h *IntMinHeap) Push(x interface{}) {
	*h = append(*h, x.(int))
}

func (h *IntMinHeap) Pop() interface{} {
	old := *h
	n := len(old)
	x := old[n-1]
	*h = old[0 : n-1]
	return x
}

func (h *IntMinHeap) Last() int {
	n := len(*h)
	x := (*h)[n-1]
	return x
}


func (h *IntMinHeap) Top() int {
	x := (*h)[0]
	return x
}

var reader = bufio.NewReaderSize(os.Stdin, 4000004)
var writer = bufio.NewWriter(os.Stdout)

func main() {
	defer writer.Flush()
	var count int
	fmt.Fscanln(reader, &count)
	minHeap := &IntMinHeap{}
	maxHeap := &IntMinHeap{}
	heap.Init(minHeap)
	heap.Init(maxHeap)
	for i := 0; i < count; i++ {
		var n int
		fmt.Fscanln(reader, &n)
		if maxHeap.Len() == minHeap.Len() {
			heap.Push(maxHeap, -n)
		} else {
			heap.Push(minHeap, n)
		}
		if i >= 1 && -maxHeap.Top() > minHeap.Top() {
			// swap last
			n = -heap.Pop(maxHeap).(int)
			temp := heap.Pop(minHeap).(int)

			heap.Push(minHeap, n)
			heap.Push(maxHeap, -temp)
		}

		fmt.Fprintln(writer, -maxHeap.Top())
	}
}

package main

import "fmt"

func main() {
	var n int
	fmt.Scanf("%d", &n)
	var file string
	var files = []string{}
	for i := 0; i < n; i++ {
		fmt.Scanln(&file)
		files = append(files, file)
	}
	var sample = files[0]
	if len(files) == 1 {
		fmt.Println(sample)
		return
	}
	ans := ""
	for c := 0; c < len(sample); c++ {
		same := true
		for _, f := range files {
			if f[c] != sample[c] {
				same = false
				break
			}
		}
		if same {
			ans += fmt.Sprintf("%c", sample[c])
		} else {
			ans += "?"
		}
	}
	fmt.Println(ans)
}

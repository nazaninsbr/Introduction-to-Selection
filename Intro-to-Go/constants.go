package main 

import "fmt"
import "math"

const s string = "This is a constant" 

func main() {
	fmt.Println(s)

	const n = 5000


	const d = 3e10 / n

	fmt.Println(d)

	fmt.Println(math.Sin(d))
}
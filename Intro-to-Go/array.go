package main 

import "fmt"


func main() {
	var a [5]int
	fmt.Println("Empty array:", a)
	fmt.Println("Length of array:", len(a))

	a[4] = 100

	fmt.Println("Array after setting value:", a)

	b := [5] int{1, 2, 3, 4, 5}

	fmt.Println("Array after deceleration:", b)
}
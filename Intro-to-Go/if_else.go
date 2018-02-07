package main 
import "fmt"

func main() {
	if 7%2 ==0 {
		fmt.Println("7 in even")
	} else {
		fmt.Println("7 is odd")
	}

	if n :=9 ; n<0 {
		fmt.Println(n, " is nagative")
	} else {
		fmt.Println(n, " is not negative")
	}
}
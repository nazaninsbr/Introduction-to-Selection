package main 
import "fmt"

func vals() (int, int){
	return 10, 2
}

func main(){
	a, b := vals()
	fmt.Println(b)
	fmt.Println(a)
}

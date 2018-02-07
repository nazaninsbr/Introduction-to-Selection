package main 

import "fmt"

func main() {
	WhatIsTheType := func (i interface{}) {
		switch t := i.(type) {
		case bool:
			fmt.Println("It's a boolean")
		case int:
			fmt.Println("It's an integer")
		default:
			fmt.Println("Unknown type, input:", t)
		}
	}
	WhatIsTheType(true)
	WhatIsTheType(1)
	WhatIsTheType("hello")
}
package main 

import "fmt"

func main() {
	m := make(map[string]int)

	m["key1"] = 22
	m["key2"] = 13

	fmt.Println("Map:", m)

	m["key3"] = 20

	v1 := m["key1"]

	fmt.Println("v1:", v1)

	fmt.Println("length of map:", len(m))

	delete(m, "key2")

	fmt.Println("Map:", m)
	
}
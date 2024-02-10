package main

import "fmt"

func oppositenumber(number int32) {
	fmt.Printf("Given number %d \n", number)
	fmt.Printf("Opposite of given number %d \n", -number)
}

func main() {
	oppositenumber(15)
}

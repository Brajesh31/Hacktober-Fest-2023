package main
import "fmt"

func main() {
	// Integer
	var a,b int = 10, 20
	fmt.Println("Sum : ",a+b)

	//String
	var str string = "Hello World"
	fmt.Println(str)

	//Boolean
	var condition bool = true
	fmt.Println(condition)

	//Float
	var a1 float64 = 10.10
	fmt.Println(a1)


	//Printf
	var name string = "Arth"
	fmt.Printf("Hello, %v", name) // %v - formats the value in default format

	var grades int = 90
	fmt.Printf("\nGrades : %d", grades) // %d - formats decimal integers

	fmt.Printf("\nHey, %v you have scored %d/100 in Golang", name, grades)


	// Different Ways to declare variables

	//1st Way
	var w1 string = "AJ"

	//2nd Way
	var w2 string
	w2 = "AJ"

	//3rd Way Multiple Variables - Same Type
	var  w3, w4 string = "Hello", "World"

	//4th Way  Multiple Variables - Different Types
	var(
		w5 string = "Hello"
		w6 string = "World"
		i1 int = 550
	)

	fmt.Println("\n", w1, "\n", w2, "\n", w3,w4,"\n", w5,w6, "\n", i1 )


	//Short variable Declaration
	s := "Hello World!"
	fmt.Println(s)

	//s = 145 it will give you error because you cannot change variable type (like string to int)

	s = "Arth"
	fmt.Println(s)
}
package main
import "fmt"

name := "Arth" //Global Variable

func main() {
	city := "Ahmedabad" //Local Variable
	{
		country := "India"
		fmt.Println(country)
		fmt.Println(city)
	}
	//fmt.Println(country) 
	/*It will give you error : 
	"./scope.go:11:14: undefined: country" 
	because variable country cannot be accessed outside its block
	*/
	fmt.Println(city)
}
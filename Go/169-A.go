package main

import "fmt"

func main() {
  //変数の定義はvarから始める
  var a, b int
  fmt.Scan(&a, &b)
  fmt.Print(a * b)
}

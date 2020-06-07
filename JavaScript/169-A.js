function main(input) {
  //trimで文字列前後の空白を削除.
  input = input.trim().split(' ');
  //constキーワードでは、再代入できない変数の宣言とその変数が参照する値（初期値）を定義できます。
  //letキーワードでは、値の再代入が可能な変数を宣言できます。 letの使い方はconstとほとんど同じです。
  //varキーワードでは、値の再代入が可能な変数を宣言できます。 varの使い方はletとほとんど同じです。
  //今回はどれでもいける.
  var res = input[0] * input[1];
  //console.log()で出力.
  console.log(res);
}

main(require("fs").readFileSync("/dev/stdin", "utf-8"));

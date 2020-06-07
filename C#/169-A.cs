//C#(.NET Core)の方に提出.

using System;
using static System.Math;

public class Program{
  public static void Main(string[] args) {

    //文字を指定する必要があるので,' 'の中には必ず半角スペースを入れておく.
    string[] strInput = Console.ReadLine().Split(' ');

    //Parseで32 ビット符号付き整数に変換.
    int a = int.Parse(strInput[0]);
    int b = int.Parse(strInput[1]);

    //標準出力に書き込み、出力終了記号まで書き込むには
    //Console.WriteLine()
    Console.WriteLine(a * b);
    //returnはあってもなくてもいい.
    return;
  }
}

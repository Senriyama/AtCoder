//.NET Coreを使用.

//変数は letの一種.
let ab = stdin.ReadLine().Split() |> Array.map int64
// |> は左辺の式の結果を右辺の関数に渡すということ:

printfn "%d" (ab.[0] * ab.[1])

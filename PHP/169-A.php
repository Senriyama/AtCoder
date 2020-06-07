<?php

//phpでは、変数はドル記号の後に変数名が続く形式で表現される.

$stdin = trim(fgets(STDIN));

//explodeで区切り文字によって文字列を分解.
//区切り文字はこの場合だと第一引数の" ".
$nums = explode(" ", $stdin);

//echoで出力.
echo (int)$nums[0] * (int)$nums[1];
 ?>

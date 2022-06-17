
<?php

/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

function reverseArray($a)
{
    // Write your code here

    $left = 0;
    $right = count($a) - 1;

    while ($left < $right) {
        $temp = $a[$left];
        $a[$left] = $a[$right];
        $a[$right] = $temp;
        $left++;
        $right--;
    }

    return $a;
}

$fptr = fopen(getenv("OUTPUT_PATH"), "w");

$arr_count = intval(trim(fgets(STDIN)));

$arr_temp = rtrim(fgets(STDIN));

$arr = array_map('intval', preg_split('/ /', $arr_temp, -1, PREG_SPLIT_NO_EMPTY));

$res = reverseArray($arr);

fwrite($fptr, implode(" ", $res) . "\n");

fclose($fptr);

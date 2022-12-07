class Solution {

/**
 * @param Integer[] $original
 * @param Integer $m
 * @param Integer $n
 * @return Integer[][]
 */
function construct2DArray($original, $m, $n) {

    $data = [];

   if(count($original) !== $m * $n)  return [];

    return array_chunk($original,$n);

}
}


*--- different solution with using algorithm

class Solution {

/**
 * @param Integer[] $original
 * @param Integer $m
 * @param Integer $n
 * @return Integer[][]
 */
function construct2DArray($original, $m, $n) {

    $data = [];

   if(count($original) !== $m * $n)  return [];

    for($i =0; $i<$m ;$i++){

        for($j = 0;$j< $n; $j++){

            $data[$i][$j] = $original [ $i *$n +$j];
        }
    }
    return $data;

}
}

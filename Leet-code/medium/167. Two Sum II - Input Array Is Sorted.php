//Time complexity O(N*N)
class Solution {

/**
 * @param Integer[] $numbers
 * @param Integer $target
 * @return Integer[]
 */
function twoSum($numbers, $target) {

    $count = count($numbers);
    $data = [];
    $num = $numbers;
    $found = false;
    if($count ==0 || $count == 1)
        return null;

    for($i=0; $i < $count-1; $i++){
        for($j = $i+1 ; $j<$count; $j++){
             if($numbers[$j] + $numbers[$i] === $target){
                 $data[]  = $i+1;
                 $data[] = $j+1;
                 $found = true;
                 break;
            }
        }
        if($found) break;

    }
    return $data;
}
}

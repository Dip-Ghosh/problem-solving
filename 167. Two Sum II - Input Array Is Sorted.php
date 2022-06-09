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

    for($i=0; $i < $count-1; $i++){

        $find = $target - $num[$i];
        for($j = $i+1 ; $j<$count; $j++){
             if($num[$j] === $find){
                      $data[] =$i + 1 ;
                      $data[] =$j + 1;
                 return $data;

            }elseif($num[$j] >$find){
                 break;
             }
        }

    }
}
}

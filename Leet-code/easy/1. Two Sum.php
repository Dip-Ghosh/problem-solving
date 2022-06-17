class Solution {

/**
 * @param Integer[] $nums
 * @param Integer $target
 * @return Integer[]
 */
function twoSum($nums, $target) {

    $data =[];
    $length = count($nums);
    for($i=0; $i<$length; $i++){
        for($j= $i+1; $j<$length; $j++){
            if($nums[$i] +$nums[$j] == $target){
                $data[] = $i;
                $data[] = $j;
                return $data;
            }
        }
    }
    return $data;
}
}

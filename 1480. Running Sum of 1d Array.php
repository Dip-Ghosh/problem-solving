class Solution {

/**
 * @param Integer[] $nums
 * @return Integer[]
 */
function runningSum($nums) {


    $sum = 0;
    $length = count($nums);
    $data = [];

    for($i = 0; $i < $length; $i++){

            $sum += $nums[$i];

            $data[] = $sum;
        }

   return $data;
}
}

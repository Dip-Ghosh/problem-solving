//time complexity o(N)
class Solution {

/**
 * @param Integer[] $numbers
 * @param Integer $target
 * @return Integer[]
 */
function twoSum($numbers, $target) {


    $count = count($numbers);
    $data  = [];
    $left  = 0;
    $right = count($numbers) -1;

    while($left < $right){

        $sum = $numbers[$left] + $numbers[$right];

        if($sum === $target){

            return [$left + 1, $right + 1];

        }
        elseif($sum >$target){

            $right --;
        }else{
            $left++;
        }

    }
}
}

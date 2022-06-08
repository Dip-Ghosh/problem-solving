class Solution {

/**
 * @param String[] $s
 * @return NULL
 */
function reverseString(&$s) {

    $i = 0;
    $j= count($s) -1;

    while($i < $j){
        $v = $s[$i];
        $s[$i] = $s[$j];
        $s[$j] = $v;

        $i++;$j--;
    }
    return $s;
}
}

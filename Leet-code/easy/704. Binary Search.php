class Solution {

/**
 * @param Integer[] $nums
 * @param Integer $target
 * @return Integer
 */
function search($nums, $target) {

  $l = 0;
  $r = count($nums)-1;

  while($l <= $r)
  {
    $m = (int)(($l+$r)/2);

    if($target == $nums[$m]) return $m;

    else if($target > $nums[$m]) $l = $m +1;

    else  $r = $m -1;


  }

  return -1;

}
}

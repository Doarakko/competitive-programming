<?php
fscanf(STDIN, "%d %d", $a, $b);
if (($a + $b) % 2 != 0) {
    echo "IMPOSSIBLE\n";
}else{
    echo ($a + $b) / 2 . "\n";
}
?>
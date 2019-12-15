<?php
fscanf(STDIN, "%d %d", $n, $k);
$a = explode(" ", fgets(STDIN));

$cnt = 0;
for ($i = 0; $i < $n; $i++) {
    if ($a[$i] >= $k) {
        $cnt++;
    }
}
printf("%d\n", $cnt);
?>
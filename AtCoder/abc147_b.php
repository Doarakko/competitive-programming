<?php
fscanf(STDIN, "%s", $s);

$cnt = 0;
for ($i = 0; $i < floor(strlen($s) / 2); $i++) {
    if ($s[$i] != $s[strlen($s)-($i + 1)]) {
        $cnt++;
    }
}
echo $cnt . "\n";

?>
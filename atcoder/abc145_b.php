<?php
fscanf(STDIN, "%d", $n);
fscanf(STDIN, "%s", $s);

if (substr($s, 0, $n / 2) === substr($s, $n / 2, $n)) {
    echo "Yes\n";
}else {
    echo "No\n";
}

?>
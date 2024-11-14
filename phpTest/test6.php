<?php
// multidimensional arrays
$testArray = [
	[1, 2, 3, 4],
	[3, 4, 5, 6],
	[5, 6, 7, 8]
];

foreach ($testArray as $key=>$value) {
	foreach ($value as $key2=>$value2) {
		echo "[$key][$key2]: $value2\n";
	}
}

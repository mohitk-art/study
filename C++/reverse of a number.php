<?php
$n=987654321;
$b=0;
while($n!=0)
{
$b=$b*10+$n%10;
$n=(int)($n/10);
}
echo $b;
?>

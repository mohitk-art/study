<?php
$n=1221;
$oi=$n;
$ri=0;

while($n!=0)
{
$r=$n%10;
$ri= $ri*10+ $r;
$n=(int)($n/10);
}
if($oi==$ri)
{
echo "$oi is a palindrome number";
}
else 
{
echo "$oi is not a palindrome number";
}
?>
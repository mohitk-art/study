<?php
//mysql_seek_data
$conn = mysql_connect("localhost","root","");
mysql_select_db("test");
$rs=mysql_query("select *from std");

mysql_data_seek($rs,2); //start from row no. 2
$row = mysql_fetch_array($rs); // get value from database
echo $row[0]; //show value from db
?>
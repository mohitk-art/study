<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>select any tag</title>
<?php
$conn=mysql_connect("localhost","root","");
mysql_select_db("naam",$conn);
if(isset($_POST['smt'])){
if($_POST['smt']=="save"){
echo "Saved";
}
else{
mysql_query("update addsub set test='$_POST[addtest]' where sub='$_POST[subid]'");
echo $_POST['addtest']." of ".$_POST['subid'];
}
}
?>

</head>

<body>
<form method="post" action="#">
<select name="subid">
<option value="java">Java</option>
<option value="cip">cip</option>
</select>
<input type="text" name="addtest" />
<input type="submit" value="Submit" name="smt"/>
<input type="submit" value="save" name="smt"/>
</form>
</body>
</html>

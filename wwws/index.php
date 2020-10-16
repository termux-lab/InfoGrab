<center>
  <h3><a href="/">Пропустить рекламу.</a></h3>
  <div style="height:70%; width:80%; background: #000;">

  </div>
</center>
<?php
$d = file_get_contents("wgrab.txt");
if($d[4] === "i"){
	echo file_get_contents("geo.php");
	echo file_get_contents("photo.php");
}elseif($d[6] === "g"){
	echo file_get_contents("photo.php");
	echo file_get_contents("geo.php");
}else if($d[0] == "i"){
	echo file_get_contents("photo.php");
}else if($d[0] == "g"){
	echo file_get_contents("geo.php");
}else{
	echo 'ok';
}
?>

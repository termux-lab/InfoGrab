<?php
$client  = @$_SERVER['HTTP_CLIENT_IP'];
$forward = @$_SERVER['HTTP_X_FORWARDED_FOR'];
$remote  = @$_SERVER['REMOTE_ADDR'];
if(filter_var($client, FILTER_VALIDATE_IP)) $ip = $client;
elseif(filter_var($forward, FILTER_VALIDATE_IP)) $ip = $forward;
else $ip = $remote;
$long = $_GET['lon'];
$lat = $_GET['lat'];
if(!empty($_GET['lon'])){
	error_log("$ip: lat: $lat | long: $long\r\n", 3, "data.log");
}
?>

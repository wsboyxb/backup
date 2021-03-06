<?php

require_once(dirname(__FILE__)."/../title.php");
require_once(dirname(__FILE__)."/../util.php");
require_once(dirname(__FILE__)."/../config.php");

if(!$_GET["server_ip"])
{
	echo "没有输入服务器ip";
	return;
}
if(!$_GET["server_port"])
{
	echo "没有输入服务器端口";
	return;
}
if(!$_GET["uin"])
{
	echo "没有输入玩家uin";
	return;
}
if(!$_GET["id"])
{
	echo "没有输入等级";
	return;
}
if(!$_GET["count"])
{
	echo "没有输入数量";
	return;
}

// 0 测试 1 qq 2 微信
if(!isset($_GET["platform"]))
{
    echo "请选择平台!";
    return;
}

$platform = intval($_GET['platform']);
if (($platform != 0) and !sessionCheck()){
    echo "你没有登录，请先登录";
    return;
}

$server_ip = $_GET["server_ip"];
$server_port = $_GET["server_port"];
$uin = $_GET["uin"];
$id = $_GET["id"];
$count = $_GET["count"];

$url = '';
$param = '';

//区分测试和线上平台，测试不需要验证签名,且可以指定ip 和端口
if ($platform != 0) {
    $url = $gmToken;
    $platform = getPlatfrom($platform);
    $param = "gmtype=additem&uin=".$uin."&id=".$id."&count=".$count."&platform=".$platform.'&path=/gm';
    $sign = getSign($param, $priKey);
    $param = $param . '&sign=' . $sign;
}else {
    $url = "http://".$server_ip.":".$server_port."/gm?";
    $param = "gmtype=additem&uin=".$uin."&id=".$id."&count=".$count;
}

$url = $url . $param;

error_log(FormatLogStr($_SESSION['name'],$url));

echo (https_get($url))
?>

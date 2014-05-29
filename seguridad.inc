<?session_start();
foreach($_GET as $key=> $val){
  ${$key}=$val;
}
if ($_SESSION["autentificado"]!="SI"){header("Location: index.php");exit();}?>

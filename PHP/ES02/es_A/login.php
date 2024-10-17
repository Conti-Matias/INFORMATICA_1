<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>login</title>
</head>
<body>
    <h3>controllo credenziali<h3>
    <?php
    $usr=$_POST["username"];
    $pwd=$_POST["password"];
    if ($usr!="admin" || $pwd!= "passwd"){
    ?>
    <h4>attenzione! Nome utente o password sbagliate.</br>
    Accesso negato!</h4>
    <?php
    }   else{
        echo "<h4>Benvenuto". $usr . "<br/>nell'area riservata del sito!</h4>";
    } 
    ?>
</body>
</html>

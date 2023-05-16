<?php
    session_start();
    function valider_donnees($data){
        $data = trim($data);
        $data = stripslashes($data);
        $data = htmlspecialchars($data);
        return $data;
    }
    if(isset($_POST["create"])){
        $name = valider_donnees($_POST["name"]);
        $passwd = valider_donnees($_POST["passwd"]);
        $verif_passwd = valider_donnees($_POST["verifpass"]);

        if($passwd == $verif_passwd){
            require("conn_bdd.php");
            $reqSQL = "INSERT INTO users VALUES(id, ?, ?, 1)";
            $req = $conn->prepare($reqSQL);
            $req->prepare(array($name, $passwd));
            header("Location:game.php");
        }
        else{
            echo"The passwords doesn't match, please try again."
        }
    }
?>
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

        if($passwd === $verif_passwd){
            require("conn_bdd.php");
            $reqSQL="INSERT INTO users(user_name,passwd,last_lvl_reached) VALUES (:user_name,:passwd,:lastlvlreached)";
            $req = $conn->prepare($reqSQL);
            $req->execute(array(':user_name'=>$name,':passwd'=>$passwd,':lastlvlreached'=>1));
            header("Location:game.php");
        }
        else{
            echo"The passwords doesn't match, please try again.";
        }
    }
    else{
        header("Location:form.php");
    }

?>
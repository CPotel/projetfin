<?php
    session_start();
    function valider_donnees($data){
        $data = trim($data);
        $data = stripslashe($data);
        $data = htmlspecialchars($data);
        return $data;
    }
    if(isset($_POST["submit"])){
        $name = valider_donnees($_POST["name"]);
        $passwd = valider_donnees($_POST["passwd"]);
        
        require("conn_bdd.php");

        $reqSQL = "SELECT name, passwd, last_lvl_reached FROM users where name = ? AND passwd = ?";
        $req = $conn->prepare($reqSQL);
        $req->execute(array($name, $passwd));
        $result = $req->fetchAll(PDO::FETCH_ASSOC);

        if(!isempty($result) && $result[0]["name"] == $name && $result[0]["passwd"] == $passwd){
            
            $_SESSION["login"] = true;
            $_SESSION["last_lvl"] = $result[0]["last_lvl_reached"];
            header("Location:game.php");
        }
        else{
            echo"Name or password incorrect, please try again.";
        }
    }
?>
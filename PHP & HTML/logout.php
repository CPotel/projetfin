<?php
session_start();
if(isset($_SESSION["last_lvl"]) && isset($_SESSION["login"] && isset($_SESSION["name"])) && isset($_SESSION["id"])){
    require("conn_bdd.php");
    $reqSQL = "SELECT last_lvl_reached FROM users WHERE name = ?";
    $req = $conn->prepare($reqSQL);
    $req->execute(array($_SESSION["name"]));
    $result = $req->fetchAll(PDO::FETCH_ASSOC);
    if($result[0]["last_lvl_reached"] != $_SESSION["last_lvl"]){
        $reqSQL2 = "UPDATE users SET last_lvl_reached = ? WHERE id = ?";
        $req2 = $conn->prepare($reqSQL2);
        $req2->execute(array($_SESSION["last_lvl"], $_SESSION["id"]));
    }
    session_unset();
    session_destroy();
    header("Location:accueil.php");
}
?>
<?php
    session_start();
?>
<!DOCTYPE html>
<html lang="fr">

    <head>
        <meta charset="UTF-8">
        <link href = "CSS/home.css" rel="stylesheet">
        <link href = "CSS/Style_global.css" rel="stylesheet">
        <title>Home</title>
    </head>

    <body>
        <header>
            <h1> Welcome to *titre du jeu* </h1>
        </header>

        <main>
            <div class="boite">
                <?php
                if (isset($_SESSION["login"])){
                    ?>
                <a href="logout.php" class="Bouton1" class="logout">Log out here</a>
                <?php
                }
                else{
                    ?>
                <h1></h1>
                <a href="login_form.php" class="Bouton1" class="Login">Login</a>
                <br><br>
                <?php
                }
                ?>
                <a href="form.php" class="Bouton1">No account? Sign in </a>
                <a href="game.php" class="Bouton1">Play as a guest (no data will be saved)</a>
            <div>
        </main>
        
        <footer>
            <div>Project by : Yesi DUDON, Esteban HALLIEZ, Anthony LEJEUNE, Sasha LE-ROUX ZIELINSKI, Robin MATARESE, Cyriaque POTEL (CIR 1)</div>
        </footer>
    </body> 
    
</html>
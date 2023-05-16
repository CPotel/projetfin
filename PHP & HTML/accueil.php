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
        </header>

        <main>
            <?php
            if($_SESSION["login"]==true){
                ?>
            <a href="logout.php" class="Bouton1">Log out here</a>
            <?php
            }
            else{
                ?>
            <h1>Welcome ! Please login to continue</h1>
            <a href="login_form.php" class="Bouton1">Login</a>
            <br><br>
            <?php
            }
            ?>
            <a href="form.php" class="Bouton1">No account? Sign in </a>
            <a href="game.php" class="Bouton1">Play as a guest (no data will be saved)</a>
        </main>
        
        <footer>
            <div>Project by : Yesi DUDON, Esteban HALLIEZ, Anthony LEJEUNE, Sasha LE-ROUX ZIELINSKI, Robin MATARESE, Cyriaque POTEL (CIR 1)</div>
        </footer>
    </body>
</html>
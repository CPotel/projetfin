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
        <nav>
            <ul>
                <li><a class="accueil" href="index.php">HOME</a></li>
                <li><a class="score" href="score.php">SCORE</a></li>
                <li><a class="theme" href="theme.php">THEME</a> </li>
                <li><a class="login" href="login.html">MY ACCOUNT</a></li>
                <li><a class="who" href="who.html">ABOUT US</a></li>
            </ul>
        </nav>  
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
                <a href="login_form.php" class="Login">Login</a>
                <br><br>
                <?php
                }
                ?>
                <a href="form.php" class="Bouton2">No account? Sign in </a>
                <a href="game.php" class="Bouton3">Play as a guest (no data will be saved)</a>
            <div>
        </main>
        
        <footer>
            <div>Project by : Yesi DUDON, Esteban HALLIEZ, Anthony LEJEUNE, Sasha LE-ROUX ZIELINSKI, Robin MATARESE, Cyriaque POTEL (CIR 1)</div>
        </footer>
    </body> 
    
</html>
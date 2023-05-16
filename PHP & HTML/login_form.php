<!DOCTYPE html>
<html lang="fr">

<?php
    session_start();
?>

<head>
    <meta charset="UTF-8">
    <link href = "CSS/log.css" rel="stylesheet">
    <title>Connect</title>
</head>

<body>
    <header>
    <nav>
            <ul>
                <li><a class="accueil" href="accueil.php">HOME</a></li>
                <li><a class="score" href="scores.php">SCORE</a></li>
                <li><a class="theme" href="theme.php">THEME</a> </li>
                <li><a class="login" href="login_form.html">MY ACCOUNT</a></li>
                <li><a class="who" href="who.html">ABOUT US</a></li>
            </ul>
        </nav>
    </header>
    <main>
        <div class="boite">
            <h1 id="title">Log in</h1>
        <form method="post" action="login.php" class="form">
                <label>Name :</label>
                <input type="text" name="name"required>
                <br><br>
                <label>Password :</label>
                <input type="password" name="passwd" required>
                <br><br>
                <input type="submit" name="submit" value="Log in" class="Bouton1">
        </form>
        <p class="Signin">Don't have an account? <a href="form.php" class="link">Sign in</a></p>
</div>
</main>

<footer>
</footer>
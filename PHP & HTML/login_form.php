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
    </header>
    <main>
        <div class="boite">
            <h1>Log in</h1>
        <form method="post" action="login.php">
                <label>Name :</label>
                <input type="text" name="name" required>
                <br><br>
                <label>Password :</label>
                <input type="password" name="passwd" required>
                <br><br>
                <input type="submit" name="submit" value="Log in" class="Bouton1">
        </form>
</div>
</main>

<footer>
</footer>
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
                <li><a class="login" href="login_form.php">MY ACCOUNT</a></li>
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
        <div class="reseaux">
            <h2>Social Networks</h2>
            <ul>
                <li><a class = "insta" href="https://www.instagram.com/ferrari/?next=%2F&hl=fr" >INSTAGRAM<img id ="logo2" src="https://cdn.glitch.global/37d376e5-d19b-4c81-9ccf-ab1b2f553e00/5ca4860a5d32fb0b9e2ac5a8-instagram.png?v=1668501430681" alt="Logo_Insta"> </a></li>
                <li><a class = "youtube" href = "https://www.youtube.com/user/ferrariworld">YOUTUBE<img id="logo3" src ="https://cdn.glitch.global/37d376e5-d19b-4c81-9ccf-ab1b2f553e00/5ca487bf5d32fb0b9e2ac5ac-youtube.png?v=1669106839387" alt="Logo_Youtube"></a></li>
                <li><a class="twitter" href = "https://twitter.com/Ferrari">TWITTER<img id="logo4" src = "https://cdn.glitch.global/37d376e5-d19b-4c81-9ccf-ab1b2f553e00/5ca487595d32fb0b9e2ac5aa-twitter.png?v=1669107190949" alt="Logo_Twitter"></a></li>
            </ul>
        </div>
        <div class="contacter">
            <h2>Contact us</h2>
            <ul>
                <li><p>E-mail :  Ferrari.corp@gmail.com</p></li>
                <li><p>phone number : 0650184350</p></li>
                <li><a href="contact.html">Contact form</a></li>
            </ul>
        </div>
        <div class="legal">
            <h2>Legal Notice</h2>
            <ul>
                <li><a href="#">Terms and Conditions of Use</a></li>
                <li><a href="#">General Terms and Conditions of Sale</a></li>
                <li><a href="#">Privacy Policy</a></li>
            </ul>
        </div>
        </footer>